# Drupal Demonstration

This repository is a simple demonstration of a virtualized environment,
 tailored for drupal, within a Centos 7x operating system.  Installation,
 and information regarding [user accounts](https://github.com/jeff1evesque/drupal-demonstration#ssh)
 needed to ssh into the [vagrant box](https://github.com/jeff1evesque/drupal-demonstration#vagrant-box)
 can be found below.

## Contributing

Please adhere to [`contributing.md`](https://github.com/jeff1evesque/drupal-demonstration/blob/master/contributing.md)
, when contributing code. Pull requests that deviate from the
 [`contributing.md`](https://github.com/jeff1evesque/drupal-demonstration/blob/master/contributing.md)
, could be [labelled](https://github.com/jeff1evesque/drupal-demonstration/labels)
 as `invalid`, and closed (without merging to master). These best practices
 will ensure integrity, when revisions of code, or issues need to be reviewed.

## Preconfiguration

This project implements puppet's [r10k](https://github.com/puppetlabs/r10k)
 module via vagrant's [plugin](https://github.com/jantman/vagrant-r10k). A
 requirement of this implementation includes a `Puppetfile` (already defined),
 which includes the following syntax:

```ruby
#!/usr/bin/env ruby
## Install Module: vcsrepo
mod 'vcsrepo',
  :git => 'git@github.com:puppetlabs/puppetlabs-vcsrepo.git',
  :ref => '1.3.0'
...
```

Specifically, this implements the ssh syntax `git@github.com:account/repo.git`,
 unlike the following alternatives:

- `https://github.com/account/repo.git`
- `git://github.com/account/repo.git`

This allows r10k to clone the corresponding puppet module(s), without a
 deterrence of [DDoS](https://en.wikipedia.org/wiki/Denial-of-service_attack).
 However, to implement the above syntax, ssh keys need to be generated, and
 properly assigned locally, as well as on the github account.

The following steps through how to implement the ssh keys with respect to
 github:

```bash
$ cd ~/.ssh/
$ ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
Enter file in which to save the key (/Users/you/.ssh/id_rsa): [Press enter]
Enter passphrase (empty for no passphrase): [Type a passphrase]
Enter same passphrase again: [Type passphrase again]
$ ssh-agent -s
Agent pid 59566
$ ssh-add ~/.ssh/id_rsa
$ pbcopy < ~/.ssh/id_rsa.pub
```

**Note:** it is recommended to simply press enter, to keep default values
 when asked *Enter file in which to save the key*.  Also, if `ssh-agent -s`
 alternative for git bash doesn't work, then `eval $(ssh-agent -s)` for other
 terminal prompts should work.

Then, at the top of any github page (after login), click `Settings > SSH keys >
 Add SSH Keys`, then paste the above copied key into the `Key` field, and click
 *Add key*.  Finally, to test the ssh connection, enter the following within
 the same terminal window used for the above commands:

```bash
$ ssh -T git@github.com
The authenticity of host 'github.com (207.97.227.239)' can't be established.
RSA key fingerprint is 16:27:ac:a5:76:28:2d:36:63:1b:56:4d:eb:df:a6:48.
Are you sure you want to continue connecting (yes/no)? yes
Warning: Permanently added 'github.com,192.30.252.130' (RSA) to the list of
known hosts.
Hi jeff1evesque! You've successfully authenticated, but GitHub does not provide
shell access.
```

## Configuration

Fork this project in your GitHub account.  Then, clone your repository, with
 one of the following approaches:

- [simple clone](https://github.com/jeff1evesque/drupal-demonstration/blob/master/README.md#simple-clone):
 clone the remote master branch.
- [commit hash](https://github.com/jeff1evesque/drupal-demonstration/blob/master/README.md#commit-hash):
 clone the remote master branch, then checkout a specific commit hash.
- [release tag](https://github.com/jeff1evesque/drupal-demonstration/blob/master/README.md#release-tag):
 clone the remote branch, associated with the desired release tag.

### Simple clone

```bash
cd /[destination-directory]
sudo git clone https://[account]@github.com/[account]/drupal-demonstration.git
cd drupal-demonstration
git remote add upstream https://github.com/[account]/drupal-demonstration.git
```

**Note:** `[destination-directory]` corresponds to the desired directory path,
 where the project repository resides.  `[account]` corresponds to the git
 username, where the repository is being cloned from.  If the original
 repository was forked, then use your git username, otherwise, use
 `jeff1evesque`.

### Commit hash

```bash
cd /[destination-directory]
sudo git clone https://[account]@github.com/[account]/drupal-demonstration.git
cd drupal-demonstration
git remote add upstream https://github.com/[account]/drupal-demonstration.git
# stop vagrant
vagrant halt
# ensure diffs don't prevent checkout, then checkout hash
git checkout -- .
git checkout [hash]
```

**Note:** the hashes associated with a release, can be found under the
 corresponding tag value, on the [release](https://github.com/jeff1evesque/drupal-demonstration/releases)
 page.

**Note:** `[destination-directory]` corresponds to the desired directory path,
 where the project repository resides.  `[account]` corresponds to the git
 username, where the repository is being cloned from.  If the original
 repository was forked, then use your git username, otherwise, use
 `jeff1evesque`.

### Release tag

```bash
cd /[destination-directory]
# clone release tag: master branch does not exist
sudo git clone -b [release-tag] --single-branch --depth 1 https://github.com/[account]/drupal-demonstration.git [destination-directory]
git remote add upstream https://github.com/[account]/drupal-demonstration.git
# create master branch from remote master
cd drupal-demonstration
git checkout -b master
git pull upstream master
# return to release tag branch
git checkout [release-tag]
```

**Note:** `[release-tag]` corresponds to the [release tag](https://github.com/jeff1evesque/drupal-demonstration/tags)
 value, used to distinguish between releases.

**Note:** `[destination-directory]` corresponds to the desired directory path,
 where the project repository resides.  `[account]` corresponds to the git
 username, where the repository is being cloned from.  If the original
 repository was forked, then use your git username, otherwise, use
 `jeff1evesque`.

## Installation

In order to proceed with the installation for this project, two dependencies
 need to be installed:

- [Vagrant](https://www.vagrantup.com/)
- [Virtualbox](https://www.virtualbox.org/)

Once the necessary dependencies have been installed, execute the following
 command to build the virtual environment:

```bash
cd /path/to/drupal-demonstration/
vagrant up
```

Depending on the network speed, the build can take between 10-15 minutes. So,
 grab a cup of coffee, and perhaps enjoy a danish while the virtual machine
 builds. Remember, the application is intended to run on localhost, where the
 [`Vagrantfile`](https://github.com/jeff1evesque/drupal-demonstration/blob/master/Vagrantfile)
 defines the exact port-forward on the host machine.

**Note:** a more complete refresher on virtualization, can be found within the
 vagrant [wiki page](https://github.com/jeff1evesque/drupal-demonstration/wiki/Vagrant).

The following lines, indicate the application is accessible via
 `localhost:6585`, on the host machine:

```bash
...
  ## Create a forwarded port mapping which allows access to a specific port
  #  within the machine from a port on the host machine.
  config.vm.network "forwarded_port", guest: 80, host: 6585
  config.vm.network "forwarded_port", guest: 443, host: 6686
...
```

Otherwise, if ssl is configured, then the application is accessible via
 `https://localhost:6686`, on the host machine.

**Note:** general convention implements port `443` for ssl.

When the `vagrant up` build succeeds, visit [https://localhost:6686](https://localhost:6686), and complete the drupal installation:

- mariadb user: `authenticated`
- mariadb pass: `password`

## Testing / Execution

### phpMyAdmin

This project include a fully functional [phpMyAdmin](https://www.phpmyadmin.net/) implementation,
 which can be accessed as follows:

- https://localhost:6686/phpMyAdmin

The corresponding password, is the same user password, used for our mariadb:

- mariadb user: `authenticated`
- mariadb pass: `password`

### SSH

The following user / password, have been created:

- `root`: `vagrant-admin`
- `provisioner`: `vagrant-provision`

In addition, the ssh key-pair implements the passphrase:

- `passphrase`

### Vagrant Box

This repository implements a custom vagrant base box, created from a centos 7x
 [minimal iso](http://isoredirect.centos.org/centos/7/isos/x86_64/CentOS-7-x86_64-Minimal-1511.iso),
 with a custom selinux [policy module](https://github.com/mitchellh/vagrant/issues/6970)
 enabled, to allow drupal pages to be served.  The exact [details](https://atlas.hashicorp.com/jeff1evesque/boxes/centos7x)
 of the vagrant box, can be located on the corresponding atlas repository page.