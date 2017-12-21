#include <stdio.h>

extern double sharedBirthdayProbability (int, int);
extern double consecutiveBirthdaysProbability (int, int, int);

int main ()
{
  double sharedProb, consecProb;

  /* Tests */
  sharedProb = sharedBirthdayProbability (21, 10000);
  consecProb = consecutiveBirthdaysProbability (3, 3, 10000);
  printf ("RESULTS: sharedProb=%lf  consecProb=%lf\n", sharedProb, consecProb);
}

