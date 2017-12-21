/*
Exercise 0.3 What is the error produced by compiling this program?
*/

#include <stdio.h>

int Main () 
{
}

/* 

The error produced by compiling this program is below. This occurs as a result of "Main" 
being used (the m is capitalized) as opposed to "main", C is case sensitive and therefore
attention must be payed to the cases of code being written.


Exercise0.3.c:9:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
