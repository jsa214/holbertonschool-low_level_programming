#include "holberton.h"

/**
 * _abs - prints absolute value of an integer
 * @c: variable
 *
 * Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
		c = c * -1;
	return (c);
}
