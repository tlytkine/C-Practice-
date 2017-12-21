/*
Exercise 0.7 What errors are reported by the compiler with this program?
*/

#include <stdio.h>

int main () 
{
	printf ("Hello World!\n);	// Forgot the matching right quote (")
}

/*
The compiler reports the below errors due to the printf statement not having closed quotes.
This causes it to mistake the comment as being part of the print statement.

Exercise0.7.c:9:66: error: expected ';' after expression
        printf ("Hello World!\n);       // Forgot the matching right quote (")
                                                                              ^
                                                                              ;
1 error generated.


*/
