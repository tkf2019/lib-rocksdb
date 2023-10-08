# Rocksdb for Unikraft

This is the port of Rocksdb for Unikraft as external library.

## Build

Rocksdb depends on the following libraries (checkout *stable* if not mentioned), that need to
be added to `Makefile` in this order:

- `lib-libcxxabi`
- `lib-libcxx`
- `lib-libunwind`
- `lib-compiler-rt`
- `lib-musl`
- `lib-intel-intrinsics` (*staging* needed for `<cpuid.h>`)

```Makefile
UK_ROOT ?= $(PWD)/../unikraft
UK_LIBS ?= $(PWD)/../libs
LIBS := $(UK_LIBS)/lib-libcxxabi:$(UK_LIBS)/lib-libcxx:$(UK_LIBS)/lib-libunwind:$(UK_LIBS)/lib-compiler-rt:$(UK_LIBS)/lib-musl:$(UK_LIBS)/lib-intel-intrinsics:$(UK_LIBS)/lib-rocksdb
all:
    @$(MAKE) -C $(UK_ROOT) A=$(PWD) L=$(LIBS)
$(MAKECMDGOALS):
    @$(MAKE) -C $(UK_ROOT) A=$(PWD) L=$(LIBS) $(MAKECMDGOALS)

```