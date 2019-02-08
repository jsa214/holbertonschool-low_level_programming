#include <stdio.h>

/**
 * main - print alphabet in lower case
 *
 * putchar with space cmd creates a n line
 *
 */

int main(void)

{
	int c;

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
