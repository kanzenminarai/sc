#include <stdio.h>

// cannot do multiple calculations in a single line, and can't do floating point calculations
int testing(char *source) {
  int number[2], result = 0;
  char operator = 0;
  unsigned int counter = 0, index = 0;
  while(source[counter] != '\0') {
    if(source[counter] == '+' || source[counter] == '-' || source[counter] == '*' || source[counter] == '/') {
      if(index == 1) index = 0;
      else index = 1;
      operator = source[counter];
    }
    if(source[counter] >= '0' && source[counter] <= '9')
      number[index] = (number[index] * 10) + (source[counter] - '0');
    counter++;
  }
  switch(operator) {
    case '+':
      result = number[0] + number[1];
      break;

    case '-':
      result = number[0] - number[1];
      break;

    case '*':
      result = number[0] * number[1];
      break;

    case '/':
      result = number[0] / number[1];
      break;

    default:
      result = 0;
      break;
  }
  return result;
}

int main(int argc, char **argv) {
  char *str = argv[argc - 1];
  printf("%i\n", testing(str));
  return 0;
}
