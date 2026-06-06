# dwarfdump

This is a `build2` package for the [`dwarfdump`](https://github.com/davea42/libdwarf-code)
command-line utility. It inspects DWARF debugging information in ELF, Mach-O,
and PE object files and executables.


## Usage

To start using `dwarfdump` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * dwarfdump ^2.3.2
```

Then import the executable in your `buildfile`:

```
import! [metadata] dwarfdump = dwarfdump%exe{dwarfdump}
```


## Importable targets

This package provides the following importable targets:

```
exe{dwarfdump}
```

The `dwarfdump` command-line tool for inspecting DWARF debug information.
