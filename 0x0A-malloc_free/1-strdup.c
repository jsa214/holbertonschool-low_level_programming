#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function returns pointer to newly created space in memory
 *
 * @str: String being duplicated
 * @s: Duplicate of str string
 * Return: pointer represented by s or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s = malloc(i * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}
