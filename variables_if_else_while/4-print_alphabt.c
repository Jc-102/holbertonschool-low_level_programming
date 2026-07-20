#include <stdio.h>

/**
 * main - prints alphabet without q and e
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	putchat('\n');

	return (0);
}
