/*
Exercise 0.12 Try to compile and run this program. 
*/

#include <stdio.h>

int main () 
{
	// Declare an integer variable called "i".
	int i;
	
	// Wrong assignment operator 
	i := 5;

	// Print out its value to the screen. 
	printf ("%d\n", i);
}

/*
The program produces this error when it compiles and does not print anything when it is
runned.

Exercise0.12.c:13:5: error: expected expression
        i := 5;
           ^
1 error generated.
*/
