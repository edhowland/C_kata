# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-3

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.



## Kata 3

Kata 3 explores the conditional branch with 'if/else' statements.


#### Self program

In Unix/Linux, int argc is always at least 1. char *argv[0] is always the
name of the executable itself.


```C
// self.c - who am i?
#include <stdio.h>

int main(int argc, char **argv) {
  printf("I am %s\n", argv[0]);
  return 0;
}
```

We can try this out and check the difference between gccc and make:

```bash
$ make self
cc     self.c   -o self
office ls self
self
$ ./self 
I am ./self
#
$ gcc self.c
$ ls a.out
a.out
$ ./a.out 
I am ./a.out
```

This technique combined with the conditional 'if' statement can be used to
change the behaviour of the application.

This can be seen in:

- gunzip, zcat
- vim, vi and view
- busybox : Over 300 possible names


