#include "holberton.h"

/**
 * _islower - checks for lowercase char
 * @c: lowercase letter
 *
 * Return: 1 if 'c' is lowercase, otherwise 0
 */

int _islower(int c)


{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
