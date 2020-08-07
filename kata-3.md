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



