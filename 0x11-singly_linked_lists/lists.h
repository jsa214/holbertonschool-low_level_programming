#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdarg.h>

/* Typedef used to describe data structure */

/**
 * list_t - Struct list_t
 * @data: Type to print is unsigned int
 * @next: pointer to the next layer in the struct
 */

typedef struct list_t {
	int data;
	struct list_t *next;
} str;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif /*LISTS_H*/
