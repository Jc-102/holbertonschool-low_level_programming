#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assings a random number and prints the last digit
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldigit = n % 10;

	printf("Last digit of %d is %d and is ", n, ldigit);
	
	if (ldigit > 5)
		printf("greater than 5\n");
	else if (ldigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
