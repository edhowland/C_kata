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




