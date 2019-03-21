#include "lists.h"

/**
 * list_t - Structure being pointed to
 *
 * @head: pointer to address of 1st line in struct array
 * @str: char pointer to string
 * Return: address of str ptr or NULL
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (((new_node) = (list_t *) malloc(sizeof(list_t))))
	{
		new_node->len = *str;
		new_node->next = new_node;
		new_node->head = next;
		return (head);
	}
	else
		return (NULL);
}
