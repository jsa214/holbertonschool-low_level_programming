#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - copies string from src to dest
 *
 * @dest: destination for append
 * @src: appended string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
