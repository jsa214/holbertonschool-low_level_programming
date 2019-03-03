#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @n: first n bytes
 * @dest: memory area copy destination
 * @src: memory area to be copied
 * Return: start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (start);
}
