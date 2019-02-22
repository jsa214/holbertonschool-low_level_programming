#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copies a string and at most n bytes
 *
 * @dest: Pointer to destination
 * @src: pointer to string
 * @n: n bytes from src being copied
 *
 * Return: temp
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (i != n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		j++;
		i++;
	}
	while (j != n)
		dest[j++] = '\0';
	return (dest);
}
