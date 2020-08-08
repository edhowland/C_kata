// iam.c - Who am I?
#include <stdio.h>
#include <libgen.h>
#include <string.h>

int main(int argc, char **argv) {
  char *bname = basename(argv[0]);
  if (strncmp(bname, "yhwh", strlen(bname)) == 0) {
    printf("I am YWHW\n");
  } else {
    printf("I am %s\n", bname);
  }

  return 0;
}
