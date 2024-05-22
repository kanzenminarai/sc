# Scientific Calculator

>[!WARNING]
> This project is not stable and can change anytime.

### Description
**sc** is a open source software that calculates integer numbers using the postfix notation and show the result of 
a expression.

### Dependencies
The only dependencies and its respective versions or higher needed are:
* **git** (2.45.1)
* **clang** (18.1.1)
* **xmake** (2.9.1)

### Install
```bash
# Clone the repository
git clone --verbose https://github.com/kanzenminarai/sc

# Changing to the software directory
cd sc/

# Compile
xmake build

# Install
xmake install # In case of admin request use "xmake install --admin"
```

### Usage
Here are some usage examples below in command line.
```bash
# Execute
sc

# Single operator
1 1 +

# Multiple operators
23 19 + 99 22 - 2 * 32 / 2 ^
```

### Uninstall
```bash
xmake uninstall # In case of admin request use "xmake uninstall --admin"
```

### License
This project is under the [Zero Clause BSD License](./LICENSE).

### To do
* add a infix evaluator support
* add command line evaluation support
* add a gui support
* add a MacOS and BSD support
