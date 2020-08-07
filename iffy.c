// iffy.c - Choose between 2 options
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printf("Hello World!\n"); 
  } else {
    printf("second option\n");
  }

  return 0;
}
