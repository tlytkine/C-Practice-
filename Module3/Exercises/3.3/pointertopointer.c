/* Exercise 3.3 Write a program in pointertopointer.c to use a pointer to a pointer to an int.
Fill in the needed assignments below to make the program print "5". */

#include <stdio.h>

int main ()
{
        int i = 0;
        int *p = NULL;
        int **p2 = NULL;

        // Fill in the assignments here to make the program work:
        p = &i;
        *p = 5;
        p2 = &p;

        // Should print "5";
        printf ("i = %d\n", **p2);
}









