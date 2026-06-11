# dwarfgen

This is a `build2` package for the [`dwarfgen`](https://github.com/davea42/libdwarf-code)
command-line tool. It reads an existing ELF binary with DWARF debug information and
produces a new ELF object file containing generated DWARF, using the `libdwarfp` producer
library.


## Usage

To start using `dwarfgen` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * dwarfgen ^2.3.2
```

Then import the executable in your `buildfile`:

```
import! [metadata] dwarfgen = dwarfgen%exe{dwarfgen}
```


## Importable targets

This package provides the following importable targets:

```
exe{dwarfgen}
```

The `dwarfgen` command-line tool for generating DWARF debug information.
