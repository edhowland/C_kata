# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-4 : Functions

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.

## Previous Katas

- [kata-1](kata-1/kata-1.md)
- [kata-2](kata-2/kata-2.md)
- [kata-3](kata-3/kata-3.md)

## Kata 4 Functions - User functions

In this kata we will explore writing custom or user-defined functions.
In C we have already seen some standard or builtin functions:

- printf
- strlen
- basename

... .etc

These functions are usualy defined for us in standard header files \[*.h\]

E.g.

```C
#include <stdio.h>
#include <string.h>

//...

printf("format string %s", "foo");
len = strlen("hello world");
```


Now, however,  we are going to define our own functions and use them in our code.

## The main() function

We have already encountered one of our own user-defined function: main.


```C
int main(int argc, char **argv) {
  // body of code goes here
}
```

Every C program needs a main() function. You can consider this function
as necessary boilerplate code. It must be present  somewhere.

## Our first function

This will be a function to add 2 integers and be outside  of our main() function.
So, technically,  we will have 2 functions in our code.

1. main()
2. add()

### The source file

To play along, please examine: add2nums.c


## The add function

These are the things to know about the  add() function

- It returns an integer: int add(...)
- It takes 2 integer arguments: x and y
-  It computes the sum of x and y and returns it.

It should be declared ahead of our main function so the compiler can resolve
its type ahead of time.

## The main() function.

Inside of main, we declare a variable called sum which is an integer.
We initialize it to the result of calling add(1, 2).
Finally, we print the result with our format string.

## Another example: How many args were passed to the program

The program count_args.c is a little more dynamic. It responds the number
of arguments you pass to it. It relys on the fact that 'int argc' is already
equal to 1 because char *argv[0] is the name of the program itself: 'count_args'

Therefore, if you pass more arguments, argc goes up by one each time.

E.g.

```bash

$ ./count_args 
You passed me 0 arguments
$ ./count_args  1
You passed me 1 arguments
$ ./count_args  1 2
You passed me 2 arguments
```

### The count_args() function

The 'int count_args(int argc)' function takes

- One integer argument. Possibly coming form argc passed to main.
- Returns an integer
- Computes the result of subtracting 1 from argc


### Split code between 3 files

The count_args program  is split between 3 files, which is common in most
C program projects.

- count_main.c : Our boilerplate main function
- count_args.c : The implementation of the 'int count_args(int argc)' function.
- count_args.h : Contains the prototype of count_args() function.

The header file 'count_args.h' needs to be included wherever the actual
'count_args()' is called.  In this case, it is called in 'main()'.

#### Compiling the  count_args program

```bash

gcc -o count_args count_main.c  count_args.c 
$ 
```




We give the '-o' flag to gcc to place the output inside of count_args, then both the .c files above.

### Creating and including count_args.h file

Any .h file is just another C source file. The .h extension refers to it
being a header file. 

#### The Prototype pattern.

Typically, .h files contain one or more of function prototypes contained
in like named .c files.

E.g. 'count_args.h' defines the prototypes of function[s] contained in
'count_args.c'

To create the prototype, just copy the beginning of the function in its .c
file, up to the trailing ')' right paren. And then append a semicolon.

E.g.

```C
// In count_args.c:
int count_args(int argc) {
// Copy to count_args.h
int count_args(int argc);

```

### Including the .h header file in our .c source file

Unlike standard C library functions like 'stdio.h' and 'string.h', locally
included files must be included with thequoted version, not the '<', '>'
surrounding characters.

```C
#include <stdio.h>
// Here we include a locally defined header file
#include "count_args.h"
```


### Good practice hint: Use the .h header file in its own .c file

It is good practice to also include the corresponding .h in its like named .c file.
This ensures that changes to the signature of the function are also captured in
the header file as well.





## Extra credit: Recursive functions

The fact program computes the factorial of some number passed to it. It captures all of the creating and
organizing user defined functions above.

In addition, we parse argv[1] with the 'sscanf' standard lib function.
