#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers followed by a new line
 * @separator: String between numbers
 * @n: place holder for arguments
 * @...: any other arguments
 */

/* Add all arguments and return sum until zero */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		printf("%d", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
