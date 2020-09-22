// count_main.c - How many arguments were passed to me
#include <stdio.h>
#include "count_args.h"


int main(int argc, char **argv) {
  int actual = count_args(argc);
  printf("You passed me %i arguments\n", actual);

  return 0;
}