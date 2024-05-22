#include "../include/evalI64.h"
#include "../include/mathI64.h"

#define SPACE_CHAR '\40'
#define BASE_TEN 10

// Returns "TRUE" if one of these operators from "char source" matches +, -, *, /, ^, otherwise "FALSE"
static inline boolean checkOperator(char source) {
  return (source == '+' || source == '-' || source == '*' || source == '/' || source == '^') ? TRUE : FALSE;
}

i64 evalPostFixI64(StackI64 *stack, char *string) {
  i64 convertedChar = 0, value0 = 0, value1 = 0, result = 0;

  for(u16 i = 0; string[i] != '\0'; i++) {
    if(checkOperator(string[i]) == FALSE) {
      if(string[i] >= '0' && string[i] <= '9') {
        convertedChar = (convertedChar * BASE_TEN) + (string[i] - '0');
        if(string[i + 1] == SPACE_CHAR || string[i] == '\0') {
          pushI64(stack, convertedChar);
          convertedChar = 0;
        }
      }
    }
    else if(checkOperator(string[i]) == TRUE) {
      value1 = popI64(stack);
      value0 = popI64(stack);
      switch(string[i]) {
        case '+':
          result = value0 + value1;
          break;
        case '-':
          result = value0 - value1;
          break;
        case '*':
          result = value0 * value1;
          break;
        case '/':
          result = value0 / value1;
          break;
        case '^':
          result = powerI64(value1, value0);
          break;
        default:
          result = 0;
          break;
      }
      pushI64(stack, result);
    }
  }
  result = popI64(stack);

  return result;
}
