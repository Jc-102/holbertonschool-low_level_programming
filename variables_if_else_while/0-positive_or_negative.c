#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number and prints if its pisitve or negative
 *
 * return: always 0
 */

int main(void)
{
	int n ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%d ", n);
	
	if (n>0)
		printf("is positive\n");
	else if (n==0)
		prinff("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
