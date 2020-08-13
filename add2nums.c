// add2nums.c - Function to add 2 integers and return the result
#include <stdio.h>

int add(int x, int y) {
  return x + y;
}


int main(int argc, char **argv) {
  int sum = add(1, 2);
  printf("1 + 2 is %i\n", sum);
  return 0;
}