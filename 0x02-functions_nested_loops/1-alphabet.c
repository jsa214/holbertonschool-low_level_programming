#include "holberton.h"

/**
 * print_alphabet - print in lower case using _putchar
 */

void print_alphabet(void);

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		_putchar(ch);
	}

	_putchar('\n');
}
