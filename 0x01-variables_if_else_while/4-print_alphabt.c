#include <stdio.h>

/**
 * main - print alphabet without q and e
 *
 * Return: The printed alphabet
 */

int main(void)

{
	char *c !;

	for (c != 'q' && c != 'e'; c++)

	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
