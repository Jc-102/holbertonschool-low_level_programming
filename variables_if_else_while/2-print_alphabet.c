#include <unistd.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a' <= 'z'; letter++)
		putchar(letter);
		putchar('\n');

	return (0);
}
