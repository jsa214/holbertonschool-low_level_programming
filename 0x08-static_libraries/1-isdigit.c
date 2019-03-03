#include "holberton.h"

/**
 * _isdigit - Finds a digit
 *
 * @c: C is the variable we are searching for
 *
 * Return: Value of '1' otherwise '0'
 */

int _isdigit(int c)

{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
