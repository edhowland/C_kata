# Makefile for main and greet
CFLAGS=-Wall -Werror

all: main

main: main.c greet.c

main.c: greet.h
greet.c: greet.h

rebuild:
	touch *.[ch]



clean:
	$(RM) main a.out
