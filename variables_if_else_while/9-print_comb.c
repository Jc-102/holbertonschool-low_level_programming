#include <stdio.h>

/**
 * main - prints single digit combinations
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(n != 9 || m != 9 ? ',' : '\n');
			if (n != 9 || m != 9)
				putchar(' ');
		}
	}

	return (0);
}
