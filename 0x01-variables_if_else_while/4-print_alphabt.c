#include <stdio.h>

/**
 * main - Print alphabet without q and e
 *
 * Return: The printed alphabet
 */

int main(void)

{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}

	for (c != 'q' && c != 'e')

	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
