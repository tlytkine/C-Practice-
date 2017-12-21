/*
Exercise 2.2: Consider the program
*/

#include <stdio.h> 

int main ()
{
  int numDaysInYear = 365;
  long int numStarsInUniverse = 2000000000L;
  unsigned long long int largestIntegerInC = 18446744073709551615LL;

  printf ("numDaysInYear = %d  numStarsInUniverse = %d  largestIntegerInC = %d",   
          numDaysInYear, numStarsInUniverse, largestIntegerInC);
}

/*
What happens when you mistakenly use %d for all the integers above?

When you use %d for all the integers, it gives a compiler error saying that the 
the format specifies type int but the argument has a different type for
long and unsigned long long.


Exercise2.2.c:11:46: warning: integer literal is too large to be represented in a signed
      integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
  unsigned long long int largestIntegerInC = 18446744073709551615LL;
                                             ^
Exercise2.2.c:14:26: warning: format specifies type 'int' but the argument has type
      'long' [-Wformat]
          numDaysInYear, numStarsInUniverse, largestIntegerInC);
                         ^~~~~~~~~~~~~~~~~~
Exercise2.2.c:14:46: warning: format specifies type 'int' but the argument has type
      'unsigned long long' [-Wformat]
          numDaysInYear, numStarsInUniverse, largestIntegerInC);
                                             ^~~~~~~~~~~~~~~~~
3 warnings generated.

*/

