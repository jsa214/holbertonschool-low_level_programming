#include "holberton.h"

/**
 * print_line - draws line in terminal
 *
 * @n: number of lines printed
 *
 * Return: Always void
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (n > 0 && c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
