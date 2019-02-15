#include "holberton.h"

/**
 * more_numbers -  prints list of numbers
 *
 * Return: void
 */

void more_numbers(void)

{

	int c;
	int i;

	for (i = 0; i <= 14; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}


}
