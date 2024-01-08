#!/usr/bin/env bash

COMPILER="gcc"
COMPILER_FLAGS="-Wall -Wextra -Werror -pedantic"
TARGET="tscs"
C_FILES_PATH="src/*.c"

if [[ $1 == "install" ]]; then
  ${COMPILER} ${COMPILER_FLAGS} -o ${TARGET} ${C_FILES_PATH}

elif [[ $1 == "uninstall" ]]; then
  rm ${TARGET}
fi