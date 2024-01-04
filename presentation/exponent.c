#include <stdio.h>

int power(int base, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

void pow(int *base, int exponent) {
  *base = power(*base, exponent); 
}

int main() {
  int a = 2;
  int b = 2;
  
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  int k = power(a, 2);
  printf("k = %d\n", k); 

  pow(&b, 2);  
  printf("a = %d\n", a);
  printf("b = %d\n", b);
 

  return 0;
}
