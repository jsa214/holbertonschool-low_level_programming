#include "holberton.h"

/**
 * _isupper - check for 'c' in uppercase
 *
 * @c: Variable to be checked
 * Return: 0 if 'c' is uppercase, otherwise 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
