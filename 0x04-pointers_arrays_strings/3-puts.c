#include "holberton.h"
#include <stdio.h>

/**
 * _puts - function for to print string characters
 *
 * @str: variable describing str pointer
 * Return: void
 */

void _puts(char *str)

{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
