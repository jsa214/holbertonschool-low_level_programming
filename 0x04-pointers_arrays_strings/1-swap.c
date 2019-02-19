#include "holberton.h"

/**
 * swap_int - Swaps 2 integers
 *
 * @a: variable being swapped with b
 * @b: variable being swapped with a
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
