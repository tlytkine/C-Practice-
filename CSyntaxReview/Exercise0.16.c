/*
Exercise 0.16 What is the error in the following code?
*/

#include <stdio.h>

int main () 
{

	int i = 10;
	while (i >= 1) 
	   printf ("i=%d\n", i);
	   i--;
}

/*
Since the while loop does not have brackets to open or close it, the program runs an infinite
loop and prints i as 10 since the program never decrements the i and goes back to the value 
it is declared as (10). As a result, 10 stays greater than 1 and it continues to be printed 
infinitely.  

*/
