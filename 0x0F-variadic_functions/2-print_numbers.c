#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * prints_numbers - Function prints numbers followed by a new line
 *
 * @n: place holder for arguments
 * Return: numbers
 */

/* Add all arguments and return sum until zero */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
char *
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if ((va_arg(ap, char *) != NULL)
		printf("%s", va_arg(ap, char *));
		    else
			    printf("nil");
		if (separator != NULL && i < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
