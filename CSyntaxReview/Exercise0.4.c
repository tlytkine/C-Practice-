/*
Exercise 0.4 What is the error produced by compiling this program?
*/

#include <stdio.h>

int main () 
{
	Printf ("Hello World!\n");
}

/*

The error produced by compiling this program is below. It happens due to Printf having the p
capitalized. 

Exercise0.4.c:9:2: warning: implicit declaration of function 'Printf' is invalid in C99
      [-Wimplicit-function-declaration]
        Printf ("Hello World!\n");
        ^
1 warning generated.
Undefined symbols for architecture x86_64:
  "_Printf", referenced from:
      _main in Exercise0-7285b6.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

*/
