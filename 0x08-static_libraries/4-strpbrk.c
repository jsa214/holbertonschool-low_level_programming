#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - pointer to break function
 *
 * @accept: string being checked for in string s
 * @s: string to check
 * Return: length i
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k, len1 = 0, len2 = 0;

	for (len1 = 0; s[len1] != '\0'; len1++)
		for (len2 = 0; accept[len2] != '\0'; len2++)
			for (i = 0; i < len1; i++)
			{
				for (j = 0; j < len2; j++)
				{
					if (s[i] == accept[j])
					{
						for (k = i; s[k] != '\0'; k++)
							return (s + i);
					}
				}
			}
	return (NULL);
}
