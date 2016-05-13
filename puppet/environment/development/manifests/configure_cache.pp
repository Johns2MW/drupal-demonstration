### configure_cache.pp: install, and configure caching for drupal.
###
### Note: the prefix 'package::', corresponds to a puppet convention:
###
###       https://github.com/jeff1evesque/machine-learning/issues/2349
###

## install redis
include package::redis

## start redis
include redis::start
