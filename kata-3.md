# Kata-3

## Abstract

Kata 3 is just an initial  attempt at selection.

## Selection

"When you come to a fork in the road, take it." - Yogi Berra.

In 'iffy.c', we we will select between 2 alternative based on what was passed
on the command line.


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

