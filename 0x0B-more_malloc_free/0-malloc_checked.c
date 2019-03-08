#include "holberton.h"

/**
 * malloc_checked -alloctaes memory to malloc
 *
 * @b: unsigned int mem to allocate
 * Return: pointer to malloc memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
