#include <stdio.h>

int main() {
  int x = 50;
  int *ptr = &x;
  printf("Before crash\n");
  printf("Value of x: %d\n", x);
  *ptr = 90;

  printf("After crash\nValue of x = %d\n", x);
}
