#include "holberton.h"

/**
 * array_range - Function creates an array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}
