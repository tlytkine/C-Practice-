/*
Exercise 0.8 What errors are reported by the compiler with this program? 
*/

#include <stdio.h>

int main () 
{
	printf ("Hello World!\n") 	// Forgot the semi-colon.
}

/*
This error is reported by the compiler due to the semi-colon being missing from the end of 
the printf statement.

Exercise0.8.c:9:27: error: expected ';' after expression
        printf ("Hello World!\n")       // Forgot the semi-colon.
                                 ^
                                 ;
1 error generated.

*/

