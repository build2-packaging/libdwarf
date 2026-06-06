# libdwarf - DWARF debugging information library and tools

`libdwarf` is a C library for reading and writing DWARF debugging information,
and `dwarfdump` is a command-line utility for inspecting DWARF data in object
files and executables.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
these packages in your `build2`-based project, then instead see the
accompanying package `README.md` files:

- [`libdwarf/PACKAGE-README.md`](libdwarf/PACKAGE-README.md)
- [`dwarfdump/PACKAGE-README.md`](dwarfdump/PACKAGE-README.md)

The development setup uses the standard `bdep`-based workflow. For example:

```
git clone https://github.com/build2-packaging/libdwarf.git
cd libdwarf

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
