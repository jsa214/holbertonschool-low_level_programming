#include "holberton.h"

/**
 * print_diagonal - Using mul table format to print diagonal line
 *
 * @n: Number of times '\' will be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			for (j = 1; j <= i; j++)
			{
				if (i != j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
	}
	else
	{
		_putchar('\n');
	}
}
