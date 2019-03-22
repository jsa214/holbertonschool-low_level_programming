#include "lists.h"

/**
 * _strlen - returns length of string
 *
 * @s: input a string
 * Return: Length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node - Adds new_node in place of head
 *
 * @head: pointer to address of 1st line in struct array
 * @str: char pointer to string
 * Return: address of str ptr or NULL
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
