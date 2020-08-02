// greet many using for loop
#include <stdio.h>

void greet(char *name) {
  printf("Hello %s\n", name);
}

int main(int argc, char **argv) {
  for (int i=1; i < argc; i++) {
    greet(argv[i]);
  }
  return 0;
}
