#include "holberton.h"

/**
* print_triangle - print triangle pattern using '#'
*
* @size: Variable for size of triangle
*
* Return: 0
*/

void print_triangle(int size)

{
	int i, n, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		n = 0;
		while (n < size)
			_putchar((n++ < j) ? ' ' : '#');
		_putchar('\n');
		j--;
		i++;
	}
}
