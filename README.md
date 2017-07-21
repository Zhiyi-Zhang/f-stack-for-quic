# QUIC over DPDK #
The project is to build the state-of-the-art QUIC over the DPDK. QUIC implements the protocol stack above the UDP while DPDK handles NIC I/O. Therefore an implementation of Layer 2 to Layer 4 user-mode protocol stack is needed. The developer decided to use F-Stack to support QUIC. For more detail about F-Stack, please refer to [here](https://github.com/F-Stack/f-stack).

## Overview ##
To adjust QUIC to embrace DPDK, I did the change in following parts:

### Epoll Server Implementation ###
The Epoll Server used by QUIC protocol is using standard epoll APIs from Linux kernel. To achieve kernel bypass, I need to convert those invocations to F-Stack version.

### UDP Socket ###
Current QUIC is utilizing standard UDP socket APIs from Linux kernel. Similarly, I need to replace them with the APIs provided by F-Stack.

To be finished.