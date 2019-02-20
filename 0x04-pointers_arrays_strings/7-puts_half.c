#include "holberton.h"

/**
 * puts_half - Prints half of string
 *
 * @str: String to print half
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length, charsToPrint = 0;

	while (*(str + length) != '\0')
		length++;
	if (!(length % 2))
		charsToPrint = (length - 1) / 2;
	else
		charsToPrint = length / 2;
	charsToPrint++;
	while (charsToPrint < length)
		_putchar(*(str + charsToPrint++));
	_putchar('\n');

}
