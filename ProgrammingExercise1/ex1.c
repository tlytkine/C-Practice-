#include <stdio.h>
#include <math.h>
#include <sys/times.h>


/* Solves the first bday problem */

double sharedBirthdayProbability (int numPeople, int numTrials)
{
/* 1. Given a number M, the probability that in any random group of M people, at least two
people share a birthday. */
	double P = 0;
	int arr [365];
	int i = 0;
	int j = 0;
	int h = 0;
	int x = 0;
	
	for (x = 0; x < numTrials; x++){
        for (i = 0; i < 365; i++) {
        arr[i] = 0;
        }	
	for (j = 0; j < numPeople; j++){
	int num = discrete_uniform(0,364);
	arr[num] = arr[num] + 1;
	}
        for (h = 0; h < 365; h++) {
        if (arr[h] >= 2) {
        P = P + 1;
        }
        }
	}
	
	
	P = P / numTrials;
	return P;
}


/* Solution to second bday problem. */

double consecutiveBirthdaysProbability (int numPeople, int numConsecutive, int numTrials)
{
/* 2. Given numbers M and K, the probability that in any random group of M people, 
you find a subset of K people who birthdays fall on K consecutive days */
	
	double P = 0;
	int cons = 0;
        int arr [365];
        int i = 0;
        int h = 0;
	int c = 0;
	int x = 0;
	for (c = 0; c < numTrials; c++) {
        for (i = 0; i < 365; i++) {
        arr[i] = 0;
        } 
	for (x = 0; x < numPeople; x++) {
        int num = discrete_uniform (1,364);
        arr[num] = arr[num] + 1;
	}
        for (h = 0; h < 364; h++) {
	if ((arr[h]>=1) && (arr[h+1]>=1)){
		cons = cons + 1;
				}
	if (cons == numConsecutive) {
	P = P + 1;
	}	
		}
	}		
					
								
			
        P = P / numTrials;
        return P;


	
}

