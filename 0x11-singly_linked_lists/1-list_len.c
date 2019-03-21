#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Get the length of the list in list_h
 *
 * @h: Head of list
 * Return: count of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
