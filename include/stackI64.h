#pragma once

#include <./types.h>

#define MAX_INDEX 128 // Define the maximum size of elements for "i64 stackI64" array
#define MIN_INDEX -1 // Define the minimum size of elements for "i64 stackI64" array

// Encapsulated 64 bit integer stack implementation
typedef struct StackI64 {
  i64 stackI64[MAX_INDEX];
  i8 index;
} StackI64;

// Store into "i64 stackI64" array the integer in "const i64 value", returns "TRUE" if the stack is not full, otherwise "FALSE"
boolean pushI64(StackI64 *stack, const i64 value);

// Return the last 64 bit integer value stored inside of "stackI64" array, returns "TRUE" if is not empty
i64 popI64(StackI64 *stack);
