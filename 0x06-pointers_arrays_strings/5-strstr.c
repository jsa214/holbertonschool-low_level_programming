#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - pointer to break function
 *
 * @needle: string being checked for in string s
 * @haystack: string to check
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
			break;
	}
	if (needle[j])
	{
		i++;
		j = 0;
	}
	else
		return (haystack + i);
	}
	return (0);
}
