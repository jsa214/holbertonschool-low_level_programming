#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings from src to dest
 *
 * @s1: 1st string being compared
 * @s2: 2nd string to be compared
 *
 * Return: areEqual
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
