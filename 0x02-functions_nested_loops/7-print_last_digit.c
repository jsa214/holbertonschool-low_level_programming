#include "holberton.h"

/**
 * print_last_digit - last digit
 *
 * @r: Variable
 *
 * Return: last digit
 */

int print_last_digit(int r)

{
	if (r > 0)
		r = r % 10;
	else
		r = (r % 10) * -1;
	_putchar(r + '0');
	return (r);

}
