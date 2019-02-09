#include <stdio.h>

/**
 * main - print alphabet in lower case
 *
 * Return: The printed alphabet
 */

int main(void)

{

	char c = 'a';
	char p = 'A';

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}

	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}
	putchar('\n');

	return (0);

}
