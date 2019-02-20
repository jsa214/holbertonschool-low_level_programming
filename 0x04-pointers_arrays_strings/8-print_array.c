#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of array
 *
 * @a: variable used to count n element
 * @n: variable used to print n elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter + 1 != n)
			printf("%d, ", a[counter++]);
		else
			printf("%d", a[counter++]);
	}
	putchar('\n');
}
