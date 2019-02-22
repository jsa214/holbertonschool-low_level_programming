#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Funcion reverses the contents of an array
 *
 * @a: integer
 * @n: integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	i = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
