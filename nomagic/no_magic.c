// nomagic.c : No magic numbers
#include <stdio.h>
// include stdlib.h to get EXIT_ constants
#include <stdlib.h>

// check that we get no arguments passed
int main(int argc, char **argv) {
  if (argc > 1) {
    return EXIT_FAILURE;
  } else {
    return EXIT_SUCCESS;
}
}
