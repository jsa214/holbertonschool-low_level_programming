#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies string from src to dest
 *
 * @dest: Pointer to destination
 * @src: pointer to string
 *
 * Return: temp
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	temp[0] = '\0';
	while (*src)
		*dest++ = *src++;
	return (temp);
}
