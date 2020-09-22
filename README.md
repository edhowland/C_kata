# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-5 : Side Journey

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.

## Previous Katas

- [kata-1](kata-1/kata-1.md)
- [kata-2](kata-2/kata-2.md)
- [kata-3](kata-3/kata-3.md)
- [kata-4](kata-4/kata-4.md)

## Kata-5 Miscellany


## No Magic numbers

Upto this point, we have been declaring our return code from our main(void) function
as a pure 0. We should not use magic numbers in our programs. Do you remember what
'return 0;' means?

Check nomagic/no_magic.c

Note: you will need to also include stdlib.h:

```C
#include <stdio.h>
#include <stdlib.h> // This one also for EXIT_SUCCESS, EXIT_FAILURE
```

## Warnings and Errors

Up to now, we have just been using gcc with no arguments other than the following:

- '-c' : Just compile into a '.o' object file
- '-o exename' : Create an executable file  named 'exename' instead of 'a.out'


The compiler 'gcc' has many more options which let us have more fine control the
compilation process. Among these we can  control the level of compiler warnings
and errors. Since we are just starting our journey, we want to maximize the help
we get from the compiler. Therefore, we want to get all of the possible warnings
that are available. The '-W' flag is used to control the warning level.

In addition to all the possible warnings, we want to have any warning be treated
as a compiler error.

### New compiler flags

- '-Wall' : Turn maximum warnings
- '-Werror' : Treat all warnings as fatal errors.


```bash
$ cd warn+error
$ gcc -Wall -Werror -o hello hello_bad.c

hello_bad.c: In function main:
hello_bad.c:5:7: error: unused variable a [-Werror=unused-variable]
   int a;
       ^
cc1: all warnings being treated as errors
```



### Makefiles

Up to now, we have been invoking gcc from the command line and telling what .c
files to compile and link. In projects you will encounter or create on you own
you are going to want to know how to create and modify Makefiles(s).

A Makefile is the source code file for the 'make' program. It defines what to do
to  build a project made up of (possibly) many source files.
It does this by specifying targets and their dependencies. E.g. a target called
'program' might depend on a file named  'program.c' Knowing this relationship
would mean if the file: 'program.c' changes, then the file: 'program' would need
to  be rebuilt.

Note: If no changes have occured since the last time 'program' was compiled, then
'make' has  nothing to do, so it just exits. Because of this fact, running 'make'
in the makefiles/ directory would have no effect.


```bash

cc     main.c greet.c   -o main
```
