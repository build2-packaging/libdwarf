# libdwarf - DWARF debugging information library and tools

`libdwarf` is a library for reading and writing DWARF debugging information,
and `dwarfdump` is a command-line utility for inspecting DWARF data in object
files and executables.

This file contains setup instructions for the packaging repository. If you
want to use these packages in your `build2`-based project, see the per-package
PACKAGE-README.md files:

- [libdwarf/PACKAGE-README.md](libdwarf/PACKAGE-README.md)
- [dwarfdump/PACKAGE-README.md](dwarfdump/PACKAGE-README.md)

## Packages

| Package    | Description                                        |
|------------|----------------------------------------------------|
| libdwarf   | C library for reading DWARF debugging information  |
| dwarfdump  | Command-line DWARF inspection utility              |

## Development Setup

```
git clone https://github.com/build2-packaging/libdwarf.git
cd libdwarf

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```

## Notes

**Optional decompression support**: Pass `config.libdwarf.decompression=true`
to enable zlib and zstd decompression of compressed DWARF sections. This
requires `libz` and `libzstd` to be available.

**Static linking**: When linking statically against `libdwarf`, define
`LIBDWARF_STATIC` in your consumer's build. The `liba{dwarf}` target exports
this via `c.export.poptions`.

**Upstream submodule**: The `upstream/` directory is a git submodule tracking
`https://github.com/davea42/libdwarf-code`.
