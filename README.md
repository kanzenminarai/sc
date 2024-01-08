# Turing Complete Scientific Calculator (Work in progrss)

### Description
tscs is a open source software that calculates racional numbers, and show the result of the given expression

### Dependencies
```bash
# apt
sudo apt install git gcc bash

# pacman
sudo pacman -S install git gcc bash
```

### Install
```bash
# clone the repository
git clone --verbose https://github.com/KanzenMinarai/tcsc

# changing the directory
cd tcsc/

# adding the permission to the user to execute the file
chmod +x setup.sh

# executing the installation
./setup.sh install
```
### Usage
```bash
# for now this is how to insert a expression
./tscs [expression]

# addition
./tscs 1+1

# subtraction
./tscs 2-1

# multiplication
./tscs 2*2

# division
./tscs 4/2
```

### Uninstall
```bash
./setup.sh uninstall
```