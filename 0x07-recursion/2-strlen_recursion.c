#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 *  @s: string being reversed
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
