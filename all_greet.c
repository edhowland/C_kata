// greet many
#include <stdio.h>

void greet(char *name) {
  printf("Hello %s\n", name);
}

int main(int argc, char **argv) {
  int i;
  i = 1;
  while (i < argc) {
    greet(argv[i++]);
  }
  return 0;
}
