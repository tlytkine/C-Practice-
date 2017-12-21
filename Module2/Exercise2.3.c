/*

Exercise 2.3: It's a common error to mistype the format string. Find out what happens
when you use %d for a floating point number and %f for a double.

*/

#include <stdio.h>


int main ()
{
  // Constant with "F" appended:
  float PI = 3.141F;

  // Constant in exponent format:
  double doublePI = 314.159265E-2;

  // Long double constant:
  long double ldoublePI = 3.14159265358979L;

  // Output in exponent format:
  printf ("float PI = %7.5e%d\n", PI);

  // Output in decimal format with field width and number of significant digits:
  printf ("double PI = %16.10%f\n", doublePI);

  // Long double's need to be printed as double's
  printf ("long double PI = %15.12%f\n", (double) ldoublePI);
}


/*
When you use %d for a floating point number and %f for a double, it generates this
compiler error:
It states that the data argument %f is not used for format strings of type double and
that the data argument %d causes more % conversions than data arguments.

Exercise2.3.c:23:29: warning: more '%' conversions than data arguments [-Wformat]
  printf ("float PI = %7.5e%d\n", PI);
                           ~^
Exercise2.3.c:26:37: warning: data argument not used by format string
      [-Wformat-extra-args]
  printf ("double PI = %16.10%f\n", doublePI);
          ~~~~~~~~~~~~~~~~~~~~~~~~  ^
Exercise2.3.c:29:42: warning: data argument not used by format string
      [-Wformat-extra-args]
  printf ("long double PI = %15.12%f\n", (double) ldoublePI);
          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ^
3 warnings generated.

*/
