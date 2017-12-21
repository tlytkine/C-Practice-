/*
Exercise 0.15 What's wrong with the statement below? What happens when you compile?
*/

#include <stdio.h>

int main ()
{
	if (i = 5) 
	   printf ("i is equal to 5");
}

/*

The statement is wrong because the i is not declared. When you try to compile it does not
work due to this and as a result it is not possible to run the program.

Exercise0.15.c:9:6: error: use of undeclared identifier 'i'
        if (i = 5) 
            ^
1 error generated.

*/
