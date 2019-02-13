#include "holberton.h"

/**
 * print_sign - prints logical sign as value
 *
 * @n: integer
 *
 * Return: 1 print + if n is positive
 * Returns 0 print 0 if n is zero
 * Returns -1 and print - if n is negative
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}

	else
	{
		_putchar('0');
		return (0);

	}

}
