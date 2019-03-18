#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/* define the format string */

/**
 * print_char - print char
 *
 * @c: format specifier for char
 * @va_arg: Variadic function for arguments
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - print integer
 *
 * @i: format specifier for integer
 * @va_arg: Variadic function for arguments
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float
 *
 * @f: format specifier for float
 * @va_arg: Variadic function for arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 *
 * @s: format specifier for string
 * @va_arg: Variadic function for arguments
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
/* Initialize the list */

	va_list args;
	va_start(args, format);
	char *separator = "";
	unsigned int i = 0, j = 0;
/* Define the array of structures */

print_t structs_ar[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
};

i = 0;
while (format != 0 && format[i / 4] != 0)
{
	j = 0;
	while (structs_ar[j])
		printf("%s", separator);
	{
		if (format[i] == structs_ar[j].type)
		    structs_ar[j].f(args);
		separator = ", ";
	} j++;
} i++;
