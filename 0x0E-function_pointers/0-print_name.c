#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints name
 *
 * @f: Pointer used for printname
 * @name: name being printed
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0' || f == '\0')
		return;
	(*f)(name);
}
