/*
Exercise 2.1: What kind of a compiler error do you get if you try to use a reserved word as an identifier? Use a reserved word to declare an
 integer identifier.
*/


#include <stdio.h>

int main () 
{

/*  Using a reserved word as an identifier gives this complier error:
Exercise2.1.c:13:1: warning: declaration does not declare anything
      [-Wmissing-declarations]
int auto; 
^~~~~~~~
1 warning generated.
 */ 
int auto; 


}
