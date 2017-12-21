/*
Exercise 1.2: Let's add a comment to HelloWorld:
*/

/*
Now compile with both c89 and c99 options and see what you get. 
Explain the difference

Compiling with the c89 option does not allow line comments (//) however 
compiling with the c99 option allows them. They both however do allow /* 
comments.
This is the compiler error:
Exercise1.2.c:10:71: warning: '/*' within block comment [-Wcomment]
compiling with the c99 option allows them. They both however do allow /* 
                                                                      ^
1 warning generated.  
*/

#include <stdio.h>

int main ()
{
  // Print string to screen.
  printf ("Hello World\n");
}
