/*
Exercise 3.2: In addition to the value in j also print the address in charPtr in the first printf statement.
*/

#include <stdio.h>

int main () 
{
	int i = 5;
	char *charPtr;	// Pointer declaration 
	int j;

	// Make the char pointer point to the start of the integer:
	charPtr = (char*) (& i);
	
	// Extract the byte, store it in the integer j and print j.
	j = (int) *charPtr;
	printf ("First byte: %d\nAddress in charPtr: %p\n", j, (void*)&charPtr);	
	// Get the next byte and print:
	j = (int) *(charPtr+1);
	printf ("Second byte: %d\n", j);

	// Get the third byte and print:
	j = (int) *(charPtr+2);
	printf ("Third byte: %d\n", j);
	
	// Get the fourth byte and print:
	j = (int) *(charPtr+3);
	printf ("Fourth byte: %d\n", j);
}
