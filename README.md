# CloudLand
###############
Cloudland, a light weight infrastructure as a service project, plus OpenShift 4 platform as a service deployment engine, is a system framework to manage VM instances, software defined networks (SDN), volumes ..., It can handle over 10 thousand hypervisors in one cluster so it can be a base of large scale public cloud. More over, with multi-tenant and OpenShift 4 cluster deployments on demand, it can be a straightforward alternative for private cloud or as a hyper converged infrastructure (HCI) solution.

Cloudland's main distinguishing features are:
- Able to deploy OpenShift 4 cluster on demand per tenant
- Compatibility with [Openstack API](https://ibm.github.io/cloudland/) (TBD)
- Light weight, no tons of components
- Flat learning curve for both developers and operators
- Excellent performance for inside messages delivery
- Based on HPC architecture, so super scalable
- Self auto fail recovery and stable
- Easy to customize to implement your own feature

## Architecture overview
![](https://raw.githubusercontent.com/wiki/IBM/cloudland/images/architecture.svg?sanitize=true)   

To support ultra-large scale, the hypervisors are organized into a tree hierarchy, the agents (scia are launched on demand)   

![](https://raw.githubusercontent.com/wiki/IBM/cloudland/images/tree.svg?sanitize=true)

For more information, see the [Introduction.md](https://github.com/jinlings/cloudland/blob/master/doc/Introduction.md)

## Installation

Support three ways to install cloudland

1. Run a script to install from all-in-one node and a quick experience with cloudland
   - Refer to [Deployment Guide](https://github.com/jinlings/cloudland/blob/master/doc/Deployment.md) to get more details
2. Install cloudland with rpm package
   - Refer to [Installation](https://github.com/jinlings/cloudland/blob/master/doc/Installation.md) to get more details
3. Build source code and install cloudland from end to end
   - Refer to [Build](https://github.com/jinlings/cloudland/blob/master/doc/Build.md) and [Installation](https://github.com/jinlings/cloudland/blob/master/doc/Installation.md) to get more informations

### For development
Development environment can be installed from an all-in-one node and then extended to multiple nodes of hypervisors.

### For production
Production environment can be self-incubated from a development environment -- the new control plane VMs with high availability are launched from the development environment and they take over the management of the cluster and turn it to production environment.

[ To Get Started](http://github.com/IBM/cloudland/wiki/Deployment) from here

### User Guide

For more usage, refer to [User Manual](https://github.com/jinlings/cloudland/blob/master/doc/Manual.md)

### Reporting Issues

If you encounter any problem with this package, please open a issue tracker to us

## Contributing

Refer to [CONTRIBUTING.md](https://github.com/IBM/cloudland/wiki/contribution)

## License

Apache License 2.0, see [LICENSE](https://github.com/IBM/cloudland/blob/master/LICENSE).

Visit [doc](https://github.com/IBM/cloudland/tree/master/doc) for full documentation and guide.


