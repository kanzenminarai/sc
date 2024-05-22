#pragma once

#include "./stackI64.h"

// Evaluates postfix notation expression from "char *string" using the "i64 stackI64" array to store the data
i64 evalPostFixI64(StackI64 *stack, char *string);
