/* Exercise 3.5 In pascal.c, create a 2D array to store and print Pascal's triange (Each 
element is the sum of the two elements immediately above, slightly to the left and right).
Ensure that only as much space as needed is used for the array, so the first row is of 
size 1, the second of size 2, and so on. Sample output: 

     1
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

//Variables to use in for loops
int i;
int j;
int x;

// Number of rows in Pascal's triangle
int rows = 5;

// Declares 2D array variable 
int **P = NULL;

//Allocates space in 2D array for 5 pointer-to-int (5 rows) 
P = (int **) malloc (sizeof(int*) * rows);

int X[rows];
// Allocates an int array of size index of row + 1 for each pointer-to-int
// This is so the first row is of size 1, the second is of size 2 and so on
for(i=0; i<rows; i++){
	P[i] = (int *) malloc (sizeof(int) * (i+1));
	// Stores number of columns per row 
	X[i] = i+1;
	}

// Fills 2D array with values from Pascal's Triangle
for(i=0; i<rows; i++){
	P[i][i] = 1;
	P[i][0] = 1;
	for(j=1; j<X[i]-1; j++){
		P[i][j] = P[i-1][j] + P[i-1][j-1];
		}
	}
printf ("Pascals Triangle:\n ");
for(i=0; i<rows; i++) {
        int var = rows - i;
        while (var > 0) {
        printf (" ");
        var--;
        }
	for(j=0; j<X[i]; j++){
		printf("%d  ", P[i][j]); 
	}
	printf("\n");
	}
free(P);

}


