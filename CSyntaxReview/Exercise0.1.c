/*
Exercise 0.1 The following program will compile. Why? And what kind of error is 
identified by the compiler?
*/

#include <stdio.h>

// Comment 1 

int main () // Comment 2 
{
  // 
	Comment 3 
}
// Comment 4 

/*
The program does not compile and produces the below error. This is because "Comment 3"
is not on the same line as the  "//" (one-line comment) above it. As a result, the compiler 
mistakes "Comment" for an identifier and outputs it as a "use of undeclared identifier 
'Comment'.

Exercise0.1.c:13:2: error: use of undeclared identifier 'Comment'
        Comment 3 
        ^
1 error generated.
*/
