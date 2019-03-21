#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all elements of a list
 *
 * @h: Head of list
 * Return: The count of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if ((h->str) == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
