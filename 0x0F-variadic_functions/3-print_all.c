#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/* define the format string */

/**
 * print_char - print char
 * @args: Arguments
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - print integer
 * @args: arguments
 * Return: void
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float
 * @args: arguments
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 * @args: arguments
 * Return: void
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == '\0')
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Print all functions
 * @format: constant char argument
 */

void print_all(const char * const format, ...)
{
/* Define the array of structures */
	print_t structs_ar[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
/* Initialize the list */

	va_list args;
	char *separator;
	unsigned int i, j;

	va_start(args, format);
	i = 0;
	separator = "";
	while (format != '\0' && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *structs_ar[j].type)
			{
				printf("%s", separator);
				structs_ar[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
