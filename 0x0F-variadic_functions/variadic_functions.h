#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdargs.h>
#include <stdio.h>

/**
 * struct print_functions - Struct print_functions
 *
 * @type: Format to print
 * @f: The print function to use
 */
typedef struct print_functions
{
	char *type;
	void (*f)();
}print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);

#endif /*VARIADIC_FUNCTIONS_H*/
