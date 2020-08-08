# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-3

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.



## Kata 3

Kata 3 explores the conditional branch with 'if/else' statements.

Kata 3 is just an initial  attempt at selection.

## Selection

"When you come to a fork in the road, take it." - Yogi Berra.

In 'iffy.c', we we will select between 2 alternative based on what was passed
on the command line.



## The 'if' statement

In C, we can use the 'if' statement to choose between 2 alternatives based on
some boolean expression.

### Boolean expressions

There are several  relational operators in C. Here we are going to use the
'>', [greater than] operator.

```C
if (argc > 1) {
  // .... The true branch
}
```

If the number of arguments to the program exceeds 0, then this true branch
will be taken. Note: In Unix/Linux, the first argument is always the name of
the program itself. See 'self.c'


## The 'else' or false branch

If we only give one block after the boolean expression [surrounded by parens],
then whatever follows the block surrounded by curly braces is always executed.

However, we can follow the right curly brace by an 'else' block. This block
will only be be executed if the  boolean conditional is false.

```C
  if (argc > 1) {
    printf("Hello person named %s\n", argv[1]);
  } else {
    printf("Hello World!\n"); 
  }
```





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


### Note on man pages

In the final example 'iam.c' we will be using many more functions from the
C standard library. You can get documentation  on these in section 3 of
the man pages.

```bash
$ man 3 strlen
$ man 3 basename
$ man 3 strncmp
```





## Who am I?

In the program 'iam.c', we check for 2 possibilities, based on the filename
we are executing.

- iam : option 1
- yhwh : option 2
- foo : option 3 [escape clause any name can be used here]

### First get the nbasename of the first argument [The executable file name]

The basename(char *path) returns the filename with any path parts and slashes removed.

### The if/else if/else 3-way branch

If the string comparison  of the basename with any of the 2 options returns 0,
then that block of code is run. If no string comparison returns 0, then the
final else clause code block is run.



### Making the compiled executable

Let's explore another way to create our binaries, rather than just calling 'gcc'
and then always running 'a.out'. If we use the 'make' program, it will compile
a nicely named executable for us.

```bash
$ ls iffy.c
iffy.c
$ make iffy
# ...
$ ls iffy*
iffy iffy.c
$ ./iffy
Hello World!
```

