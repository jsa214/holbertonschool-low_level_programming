#include "holberton.h"

/**
 * puts2 - Prints one out of two characters
 *
 * @str: string used to alternate
 *
 * Return: void
 */

void puts2(char *str)
{
	int counter = 0;

	while (*str)
	{
		if (counter++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
