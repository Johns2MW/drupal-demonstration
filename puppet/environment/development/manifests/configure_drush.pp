## define $PATH for all execs
Exec {path => ['/usr/bin/', '/usr/local/']}

## include puppet modules
include wget

## variables
$drush_version = '8.0.0-rc4'

## manual 'wget' drush
exec {'download-drush':
  command => "wget https://github.com/drush-ops/drush/releases/download/${drush_version}/drush.phar",
  cwd     => '/tmp',
  notify  => Exec['test-drush-install'],
}

## test drush install
exec {'test-drush-install':
  command     => 'php drush.phar core-status',
  cwd         => '/tmp',
  refreshonly => true,
  notify      => Exec['change-permission-drush'],
}

## change permission for 'drush.phar'
exec {'change-permission-drush':
  command     => 'chmod ug+x drush.phar',
  cwd         => '/tmp',
  refreshonly => true,
  notify      => Exec['move-drush'],
}

## move drush anywhere on $PATH, as 'drush', instead of 'drush.phar'
exec {'move-drush':
  command     => 'mv drush.phar /usr/local/bin/drush',
  cwd         => '/tmp',
  refreshonly => true,
  notify      => Exec['initialize-drush'],
}

## enrich the bash startup file with completion
exec {'initialize-drush':
  command     => '/usr/local/bin/drush init',
  refreshonly => true,
  notify      => Exec['drush-alias'],
}

## define drush alias
exec {'drush-alias':
  command => 'echo "alias drush=\"sudo /usr/local/bin/drush\"" >> /home/nccoe_web/.bashrc',
  refreshonly => true,
  notify => Exec['reload-bash-startup-config'],
}

## reload bash startup files
exec {'reload-bash-startup-config':
  command => 'source ~/.bashrc',
  refreshonly => true,
  provider => 'shell',
}