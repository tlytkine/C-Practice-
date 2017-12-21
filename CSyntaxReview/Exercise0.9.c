/*
Exercise 0.9 What errors are reported by the compiler with this program?
*/

#include <stdio.h>

int main () 
{
	printf ("Hello World!\n");
// Missing brace 

/*

The compiler reports the below error due to the left bracket that opens the main method not 
being closed by a right bracket.

Exercise0.9.c:15:3: error: expected '}'
*/
  ^
Exercise0.9.c:8:1: note: to match this '{'
{
^
1 error generated.



*/
