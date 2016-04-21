### Note: the prefix 'vagrant::', corresponds to a puppet convention:
###
###       https://github.com/jeff1evesque/machine-learning/issues/2349
###
class varnish::start {
    ## start webserver
    service { 'varnish':
        ensure => 'running',
        enable => true,
    }
}