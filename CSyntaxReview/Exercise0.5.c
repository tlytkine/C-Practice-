≈/*
Exercise 0.5 What errors are reported by the compiler with this program?
*/

#include <stdio.h>

int main (  // Forgot the matching right parenthesis
{
	printf ("Hello World!\n");
}

/*
These are the errors reported by the compiler:
They happen due the "int main ( " not having a right parenthesis to close the left one.
 
Exercise0.5.c:8:1: error: expected parameter declarator
{
^
Exercise0.5.c:8:1: error: expected ')'
Exercise0.5.c:7:10: note: to match this '('
int main (  // Forgot the matching right parenthesis
         ^
Exercise0.5.c:14:3: error: expected function body after function declarator
*/
  ^
3 errors generated.

*/
