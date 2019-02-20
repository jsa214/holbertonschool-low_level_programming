#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - function to print in rev
 *
 * @s: variable used for reversing str
 *
 * Return: void
 */

void print_rev(char *s)

{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');

}
