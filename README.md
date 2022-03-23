[![ci_meson](https://github.com/zege-at/ardopc/actions/workflows/main.yml/badge.svg)](https://github.com/zege-at/ardopc/actions/workflows/main.yml)

# ARDOPC
Github fork of ARDOPC from [John Wiseman G8BPQ](https://github.com/g8bpq).

Find the original files here: https://www.cantab.net/users/john.wiseman/Downloads/Beta/

Find the Manual here: https://www.cantab.net/users/john.wiseman/Documents/ARDOPC.html

## License & Copyright
There are some files in this repo without a licence and copyright information. I guess these files are from John Wiseman.

## Building ARDOPC
Clone this repository:
```
mkdir ~/Projects
cd ~/Projects
git clone https://github.com/zege-at/ardopc.git
```

Set up a building directory:
```
mkdir -p /tmp/build
cd /tmp/build
```
Set up the build:
```
meson ~/Projects/ARDOPC
```
Start the building
```
ninja
```
Install the compiled program to your computer
```
ninja install
```
## Documentation
After building and installing ARDOPC to your computer you can find the documentation with `man ardopc`
