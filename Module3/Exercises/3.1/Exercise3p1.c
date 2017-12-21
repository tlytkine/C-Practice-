#include <stdio.h>

int main () 
{ 
        int i = 5;
        int *intPtr;
	

	// Solution to Exercise 3.1
	
	// second pointer variable 
	int *intPtr2;
	// Modifies value of i
	*intPtr2 = 8;


        // Extract the address of variable i into the pointer:
        intPtr = & i;

        // Print this address:
        printf ("Variable is located at address %p\n", intPtr);

        // Use the address:
        *intPtr = *intPtr + 1;

        // See what happens:
        printf ("i = %d\n", i);         // What is in i now?

}

