#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat  - Function that links two strings
 *
 * @s1: first string
 * @s2: second string to be linked to s1
 * Return: pointer represented by s or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s1 = " ";
	char *s2 = getenv(" ");
	if ( s1 != NULL )
	{
		char *c = malloc(strlen(s1) + strlen(s2) + 1);
		if ( c != NULL )
		{
			strcpy(c, s1);
			strcat(c, s2);
			puts(c);
			free(c);
		}
	}
	return (0);
}
