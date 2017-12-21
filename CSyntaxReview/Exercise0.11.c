/*
Exercise 0.11 Try to compile and run this program.
*/

#include <stdio.h> 

int main () 
{
	// Didn't declare "i"
	
	// Assign it a value. Note the assignment operator "="
	i = 5;
	
	// Print out its value to the screen.
	printf ("%d\n", i);
}

/*
The program generates these compiler errors and does not compile / print the i because 
it was not declared.

Exercise0.11.c:12:2: error: use of undeclared identifier 'i'
        i = 5;
        ^
Exercise0.11.c:15:18: error: use of undeclared identifier 'i'
        printf ("%d\n", i);
                        ^
2 errors generated.
*/
