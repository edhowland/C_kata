// iffy.c - Choose between 2 options
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printf("second option\n");
  } else {
    printf("Hello World!\n"); 
  }

  return 0;
}
