# Rocksdb for Unikraft

This is the port of Rocksdb for Unikraft as external library.

## Build

Rocksdb depends on the following libraries, that need to
be added to `Makefile` in this order:

* `pthreads`, e.g. `pthread-embedded`
* `libc`, e.g. `newlib`

