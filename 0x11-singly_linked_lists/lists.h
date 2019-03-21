#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdarg.h>

/* Typedef used to describe data types */

/**
 * list_t - Struct list_t
 * @data: Type to print is unsigned int
 * @next: pointer to the next layer in the struct
 */

typedef struct list_t {
unsigned int data;
struct list_t *next;
} List;

size_t print_list(const list_t *h);
int _putchar(char c);

#endif /*LISTS_H*/
