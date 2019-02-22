#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercase to uppercase of str
 *
 * @s: parameter for characters
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		++i;
	}
	return (s);
}
