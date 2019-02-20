#include "holberton.h"

/**
 * _strcpy - copies string from src to dest
 *
 * @src: Pointer to string being copied
 * @dest: pointer to destination
 *
 * Return: temp
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
