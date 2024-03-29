#include "holberton.h"

/**
 * _strlen_recursion - print string length
 *
 * @s: string length being checked
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
