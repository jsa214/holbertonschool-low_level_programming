#include "holberton.h"

/**
 * print_sign - prints logical sign as value
 *
 * @n: integer
 * Return: '+' if n > 0 or '0' if = '0' otherwise '-'
 */

int print_sign(int n)

{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 48)
	{
		_putchar(45);
		return (-1);

	}

	else
	{
		_putchar(48);
		return (0);

	}

}
