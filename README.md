# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-4 : Functions

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.

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




