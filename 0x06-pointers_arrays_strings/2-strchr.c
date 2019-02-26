#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates char i string
 *
 * @c: character being checked for in string
 * @s: string to check
 * Return: start
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
