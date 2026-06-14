# libdwarf - A C library

This is a `build2` package for the [`libdwarf`](https://github.com/davea42/libdwarf-code)
C library. It provides reading and writing of DWARF debugging information
embedded in ELF, Mach-O, and PE object files and executables.


## Usage

To start using `libdwarf` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libdwarf ^2.3.2
```

Then import the library in your `buildfile`:

```
import libs = libdwarf%lib{dwarf}
```


## Importable targets

This package provides the following importable targets:

```
lib{dwarf}
```

The main compiled DWARF library. Link against this target to use
`<libdwarf/libdwarf.h>` and `<libdwarf/dwarf.h>`.


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libdwarf.decompression ?= false
```

`config.libdwarf.decompression`: enable zlib and zstd decompression of
compressed DWARF sections. When `true`, the `libz` and `libzstd` package
dependencies become active and `HAVE_ZLIB`, `HAVE_ZSTD` are defined in
the generated `config.h`.
