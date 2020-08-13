// fact_main.c - compute the factorial of 5
#include <stdio.h>
#include "fact.h"

int main(int argc, char **argv) {
  int n;
  sscanf(argv[1], "%i", &n);
  printf("The factorial of %i is %i\n", n, fact(n));
  return 0;
}