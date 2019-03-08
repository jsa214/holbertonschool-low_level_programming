#include "holberton.h"

/**
 * _calloc - Function allocates mem to an array using malloc
 *
 * @nmemb: No. of elements
 * @size: size of all elements
 * Return: Error ret null or pointer to mem alloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
