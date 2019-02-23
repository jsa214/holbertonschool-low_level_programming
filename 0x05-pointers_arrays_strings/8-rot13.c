#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encoding used on string
 *
 * @str: string being encoded
 * Return: str
 */

char *rot13(char *str)
{
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = p[j];
				break;
			}
		}
	}
	return (str);
}
