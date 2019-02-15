#include "holberton.h"

/**
 * print_line - draws line in terminal
 *
 * @n: integer counted
 *
 * Return: Always void
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
