// count_args.c - How many arguments were passed to me
#include <stdio.h>

int count_args(int argc) {
  return argc - 1;
}

int main(int argc, char **argv) {
  int actual = count_args(argc);
  printf("You passed me %i arguments\n", actual);
}