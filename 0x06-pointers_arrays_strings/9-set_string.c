#include "holberton.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of pointer to char
 *
 * @s: pointer to a pointer to be set
 * @to: pointer to a char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
