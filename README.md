# QUIC over DPDK #
The project is to build the state-of-the-art QUIC over the DPDK. QUIC implements the protocol stack above the UDP while DPDK handles NIC I/O. Therefore an implementation of Layer 2 to Layer 4 user-mode protocol stack is needed. The developer decided to use F-Stack to support QUIC. For more detail about F-Stack, please refer to [here](https://github.com/F-Stack/f-stack).

## Overview ##
To adjust QUIC to embrace DPDK, I did the change in following parts:

### Epoll Server Implementation ###
The Epoll Server used by QUIC protocol is using standard epoll APIs from Linux kernel. To achieve kernel bypass, I need to convert those invocations to F-Stack version.

### UDP Socket ###
Current QUIC is utilizing standard UDP socket APIs from Linux kernel. Similarly, I need to replace them with the APIs provided by F-Stack.


## Compile and Build ##

### Adjust QUIC ###
We need to add the F-Stack dependency to the compilation of QUIC.

Here is the gn configuration for quic_client and quic_server.
_Extracted from proto-quic/src/net/BUILD.gn_
```
executable("quic_client") {
    sources = [
      "tools/quic/quic_simple_client_bin.cc",
    ]
    deps = [
      ":net",
      ":simple_quic_tools",
      "//base",
      "//build/config:exe_and_shlib_deps",
      "//build/win:default_exe_manifest",
      "//url",
    ]
  }
  executable("quic_server") {
    sources = [
      "tools/quic/quic_simple_server_bin.cc",
    ]
    deps = [
      ":net",
      ":simple_quic_tools",
      "//base",
      "//build/config:exe_and_shlib_deps",
      "//build/win:default_exe_manifest",
      "//third_party/boringssl",
      "//third_party/protobuf:protobuf_lite",
    ]
  }
```

The epoll server static library gn configuration is like:
_Extracted from proto-quic/src/net/BUILD.gn_
```
static_library("epoll_server") {
    sources = [
      "tools/epoll_server/epoll_server.cc",
      "tools/epoll_server/epoll_server.h",
    ]
    deps = [
      ":net",
      "//base",
    ]
  }
```

### CFlags for F-Stack ###

_Extracted from f-stack/example/MakeFile_
```
LIBS+= -L${FF_PATH}/lib -L${FF_DPDK}/lib -Wl,--whole-archive,-lfstack,--no-whole-archive
LIBS+= -Wl,--whole-archive -lrte_pmd_vmxnet3_uio -lrte_pmd_i40e -lrte_pmd_ixgbe -lrte_pmd_e1000 -lrte_pmd_ring
LIBS+= -Wl,--whole-archive -lrte_hash -lrte_kvargs -Wl,-lrte_mbuf -lethdev -lrte_eal -Wl,-lrte_mempool
LIBS+= -lrte_ring -lrte_cmdline -lrte_cfgfile -lrte_kni -lrte_timer -Wl,-lrte_pmd_virtio
LIBS+= -Wl,--no-whole-archive -lrt -lm -ldl -lcrypto -pthread

TARGET="helloworld"
all:
	cc -O -gdwarf-2  -I../lib -o ${TARGET} main.c ${LIBS}
```
