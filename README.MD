# EvenOdd (Lookup Table Version)
Take value prebaking to the extreme! inspired by "even-odd else ifs" meme. The resultant lookup table occupies ~21GB file. Just a small for fun project.

## Building
### Requirements
- Git
- GNU Make
- TinyCC C Compiler (tcc)
> Why TCC is used is because it's small and fast, and it generates small executable binary too.

### Command (`make` Version)
```shell
git clone https://github.com/EmiyaSyahriel/evenodd_lut
cd evenodd_lut
make
```
> Makefile will automatically detect OS you're compiling in

### Command (Manual)
> You can subtitute the `exe` to `elf`` if you are in linux
```shell
tcc -o makelkup.exe makelkup.c
./makelkup.exe
tcc -o evenodds.exe evenodds.c
tcc -o evenoddl.exe evenoddl.c
```

## Usages
> You can subtitute the `exe` to `elf`` if you are in linux
### `makelkup.exe`
Generates the lookup table

### `evenodds.exe [number]` 
Even-odd app using algorithm

### `evenoddl.exe [number]`
Even-odd app using lookup table. (requires `evenodds.lut`)

### `evenodds.lut`
Lookup table for the even odd app.

## License
CC-BY 4.0 (see LICENSE file)

You can use this code as you want as long as when you share even the modified version it, you gave the attribution to me for this exact code files.