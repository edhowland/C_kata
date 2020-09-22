# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-5 : Side Journey

Kata 5 is about compiler flags, eliminating magic numbers and Makefiles.

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



## Makefiles

Up to now, we have been invoking gcc from the command line and telling what .c
files to compile and link. In projects you will encounter or create on you own
you are going to want to know how to create and modify Makefiles(s).

A Makefile is the source code file for the 'make' program. It defines what to do
to  build a project made up of (possibly) many source files.
It does this by specifying targets and their dependencies. E.g. a target called
'program' might depend on a file named  'program.c'. Knowing this relationship
would mean if the file: 'program.c' changes, then the file: 'program' would need
to  be rebuilt.

Note: If no changes have occured since the last time 'program' was compiled, then
'make' has  nothing to do, so it just exits. Because of this fact, running 'make'
in the makefiles/ directory would have no effect. Unless you just cloned
this repository.

### Syntax of a makefile

A 'Makefile' language consists of the following:

- Variable settings
- Rules

#### Variables

By convention, all variables are all uppercase and have no spaces between the name
of the var and the '='

```
CFLAGS=-Wall -Werror
```

Above, 'CFLAGS' are the compiler flags passed to gcc when 'make' calls it.

#### Rules

A rule stanza consists of the following components

1. target name followed by a ':'
2. A list of 0 or more space separated dependicies. after the ':'
3. A <Tab> indented optional command to be run if the target needs to be built.

Note: you must supply at least either one dependency or one build command.

Note: The build command must be indented by at least 1 tab character. Indenting by
spaces will trigger a syntax error.

#### Example Makefile

```make
# This is a comment
# Set up a variable
CFLAGS=-Wall -Werror

# the default target
all: nomagic

nomagic: no_magic.c
	$(CC) $(CFLAGS) -o nomagic no_magic.c
```


Note: We use '$(CC)' and '$(CFLAGS)' to dereference the value of the CC and CFLAGS
variables. The CC variable is supplied to us and is usually gcc, unless you are
using a different compiler like 'clang'.

Note: The explicit <Tab> character before the '$(CC)' under the 'nomagic:' target.

### Default targets and conventions

The 'make' program will treat the first target in the 'Makefile' as the target to
build unless given an argument was given to 'make'.
Therfore, the convention is to place a known target called 'all' at the
top of the 'Makefile' and give it all the programs and libraries. you want to
build when you just run 'make'


#### The 'clean:' target

It is also customary to place a 'clean:' with no depenencies as the final
target in the Makefile. The build step is to remove all build artifacts
such as 'a.out', '*.o', .etc.

```make
# ...
clean:
	$(RM) main a.out
```


Note: Here we also remove the compiled program: 'main'
This is handy to prevent adding to any git or other version control system, where
we do not want any binary files.

Also, note we use '$RM)' pre-defined variable instead of  of 'rm -f', it gets
translated for us.

#### The use of the 'touch' command to force a rebuild.

If we want to force a recompile even though we have not changed any source documents,
we can use the 'touch' command to update the timestamp of any source files. This
will cause the dependency to be newer than its target which will trigger
its build command.

We can automate this by supplying a 'rebuild:' target.

```make
# ...
rebuild:
	touch *.[ch]
```



