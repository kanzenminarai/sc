#include "../include/stackI64.h"

boolean pushI64(StackI64 *stack, const i64 value) {
  if(stack->index >= MAX_INDEX - 1) return FALSE;

  stack->index++;
  stack->stackI64[stack->index] = value;

  return TRUE;
}

i64 popI64(StackI64 *stack) {
  if(stack->index == MIN_INDEX) return FALSE;

  i64 result = stack->stackI64[stack->index];
  stack->index--;
  
  return result;
}
