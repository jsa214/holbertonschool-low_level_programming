#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function creates array of characters
 *
 * @size: String size rep by str
 * @c: Character in str
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(str));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
