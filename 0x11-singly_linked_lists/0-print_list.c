#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	list_t *h = head;
	int count = 0;

	while ( str = !NULL)
	{
		count++;
		str = str->next;
		printf("%u", str->data);
	}
	printf("'[0]' '(nil)'");
	return (count);
}
