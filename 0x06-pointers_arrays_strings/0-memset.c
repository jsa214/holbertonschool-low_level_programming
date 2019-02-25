#include "holberton.h"
#include <stdio.h>

/**
 * _memset - function to fill memory with constant byte
 *
 * @n: first n bytes
 * @b: constant byte
 * @s: memory area
 * Return: start
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (start);
}
