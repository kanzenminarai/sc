#include "../include/mathI64.h"

i64 factorialI64(const i64 value) {
  if(value <= 1) return 1;

  i64 result = value;
  for(i64 i = 1; i < value; i++) result *= i;
  
  return result;
}

i64 powerI64(const i64 number, const i64 expoent) {
  i64 result = 1;
  
  for(i64 counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
