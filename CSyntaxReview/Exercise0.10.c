/*
Exercise 0.10 Try to compile and run this program. 
*/

#include <stdio.h>

main () 
{
	printf ("Hello World!\n");
}

/*
The program generates the following compiler error due to the int being missing from 
the main method:

Exercise0.10.c:7:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
main () 
^
1 warning generated.

The program however still runs because the compiler automatically defaults the main to 'int'

*/
