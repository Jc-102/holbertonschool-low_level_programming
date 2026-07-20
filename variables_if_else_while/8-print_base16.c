#include <stdio.h>

/**\
 * main - prints numbers of 16 base
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (n = 10; n <= 15; n++)
		putchar(n - 10 + 'a');
	putchar('\n');

	return (0);
}
