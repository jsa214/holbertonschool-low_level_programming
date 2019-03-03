#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates char i string
 *
 * @c: character being checked for in string
 * @s: string to check
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
