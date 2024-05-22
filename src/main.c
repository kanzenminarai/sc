#include <stdio.h>
#include "../include/evalI64.h"

// Initialize all the elements in "i64 stackI64" array with the value 0
static inline void initializeStack(StackI64 *stack) {
  for(u8 i = 0; i < MAX_INDEX; i++) stack->stackI64[i] = 0;
}

int main() {
  char expression[100];
  StackI64 st;

  initializeStack(&st);

  fgets(expression, sizeof(expression), stdin);
  printf("output:%li\n\n", evalPostFixI64(&st, expression));

  return 0;
}
