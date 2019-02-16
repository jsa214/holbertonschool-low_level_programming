#include "holberton.h"

/**
 * print_square - Using '#' format to print diagonal line
 *
 * @size: Number of times '#' will be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
}
	}
	else
	{
		_putchar('\n');
	}
}
