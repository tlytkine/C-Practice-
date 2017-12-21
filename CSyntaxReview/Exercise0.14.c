/*
Exercise 0.14 What does the following program print out?
*/

#include <stdio.h>

int main () 
{
	int k = 13;
	int i;
	
	for (i=0; i < 8; i++) {
	 printf ("%d ", (k % 2));
	 k >>= 1;
	}
	printf ("%\n");
      } 
/*
The program prints:
1 0 1 1 0 0 0 0 

It generates this compiler error:
Exercise0.14.c:16:12: warning: invalid conversion specifier '
' [-Wformat-invalid-specifier]
        printf ("%\n");
                 ~^
1 warning generated.
*/
