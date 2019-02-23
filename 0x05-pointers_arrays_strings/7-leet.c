#include "holberton.h"
#include <stdio.h>

/**
 * leet - encoding used on string
 *
 * @str: string being encoded
 * Return: srt
 */

char *leet(char *str)
{
	char s[] = "aAeEoOtTlL";
	char p[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
				str[i] = p[j];
		}
	}
	return (str);
}
