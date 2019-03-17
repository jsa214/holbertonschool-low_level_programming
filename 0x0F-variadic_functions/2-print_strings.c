#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function prints numbers followed by a new line
 *
 * @separator: String printed between strings
 * @n: place holder for arguments
 * @...: Any other arguments
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *value = va_arg(args, char *);

		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
