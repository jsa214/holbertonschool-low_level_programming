#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - copies string from src using n bytes
 *
 * @dest: destination for append
 * @src: appended string
 * @n: integer for n bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (j < n && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
