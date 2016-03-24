# variables
$working_dir = '/home/provisioner'

## define $PATH for all execs
Exec {path => ['/usr/bin/', '/usr/sbin/']}

## update yum using the added EPEL repository
class update_yum {
    exec { 'update-yum':
        command => 'yum -y update',
        timeout => 750,
    }
}

## install php
class install_php {
    ## set dependency
    require update_yum

    ## install php
    class { 'php': version => '5.6.19' }
}

## configure php
class configure_php {
    ## set dependency
    require update_yum
    require install_php

    ## set memory limit
    ini_setting { 'adjust_memory_limit':
        ensure  => present,
        path    => '/etc/php.ini',
        section => 'PHP',
        setting => 'memory_limit',
        value   => '512M',
    }

    ## enable opcache
    file_line { 'enable_opcache':
        path => '/etc/php.ini',
        line => 'zend_extension=opcache.so',
    }
}

## install phpmyadmin
class install_phpmyadmin {
    ## set dependency
    require update_yum
    require install_php
    require configure_php

    ## install phpmyadmin
    node default {
        class {'phpmyadmin':
            ensure   => present,
            version  => '4.6.0',
            password => 'password',
        }
    }
}

## allow phpmyadmin access
class enable_phpmyadmin {
    ## set dependency
    require update_yum
    require install_php
    require configure_php
    require install_phpmyadmin

    ## comment out unnecessary 'require' statements
    exec {'phpmyadmin-comment-require-1':
        command => 'awk "/<RequireAny>/,/<\/RequireAny>/ { if (/Require ip 127.0.0.1/) \$0 = \"       #Require ip 127.0.0.1\" }1"  /etc/httpd/conf.d/phpMyAdmin.conf > /home/provisioner/phpMyAdmin.tmp',
        notify => Exec['phpmyadmin-comment-require-2'],
    }
    exec {'phpmyadmin-comment-require-2':
        command => "mv ${working_dir}/phpMyAdmin.tmp /etc/httpd/conf.d/phpMyAdmin.conf",
        refreshonly => true,
        notify => Exec['phpmyadmin-comment-require-3'],
    }
    exec {'phpmyadmin-comment-require-3':
        command => 'awk "/<RequireAny>/,/<\/RequireAny>/ { if (/Require ip ::1/) \$0 = \"       #Require ip ::1\" }1"  /etc/httpd/conf.d/phpMyAdmin.conf > /home/provisioner/phpMyAdmin.tmp',
        refreshonly => true,
        notify => Exec['phpmyadmin-comment-require-4'],
    }
    exec {'phpmyadmin-comment-require-4':
        command => "mv ${working_dir}/phpMyAdmin.tmp /etc/httpd/conf.d/phpMyAdmin.conf",
        refreshonly => true,
        notify => Exec['phpmyadmin-access-1'],
    }

    ## allow phpmyadmin access from guest VM to host (part 1)
    #
    #  Note: this segment appends directly below 'Require ip ::1'
    #
    #  Note: the spacing in '/^       #Require' corresponds to the above defined
    #        stanza 'phpmyadmin-comment-require-3'.
    exec {'phpmyadmin-access-1':
        command => 'sed "/^       #Require ip ::1/a \     Require all granted" /etc/httpd/conf.d/phpMyAdmin.conf > /home/provisioner/phpMyAdmin.conf',
        refreshonly => true,
        notify => Exec['phpmyadmin-access-2'],
    }
    exec {'phpmyadmin-access-2':
        command => "mv ${working_dir}/phpMyAdmin.conf /etc/httpd/conf.d/phpMyAdmin.conf",
        refreshonly => true,
        notify => Exec['phpmyadmin-system-context'],
    }

    ## reset system context on phpMyAdmin.conf (needed for selinux)
    exec {'phpmyadmin-system-context':
        command => 'restorecon /etc/httpd/conf.d/phpMyAdmin.conf',
        refreshonly => true,
    }
}

## restart httpd
class restart_httpd {
    ## set dependency
    require update_yum
    require install_php
    require configure_php
    require install_phpmyadmin
    require enable_phpmyadmin

    exec {'restart-httpd':
        command => 'systemctl restart httpd',
    }
}

## constructor
class constructor {
    ## set dependency
    contain update_yum
    contain install_php
    contain configure_php
    contain install_phpmyadmin
    contain enable_phpmyadmin
    contain restart_httpd
}
include constructor
