### Note: the prefix 'compiler::::', corresponds to a puppet convention:
###
###       https://github.com/jeff1evesque/machine-learning/issues/2349
###
class cache::varnish::install {
    class { 'varnish': }
}