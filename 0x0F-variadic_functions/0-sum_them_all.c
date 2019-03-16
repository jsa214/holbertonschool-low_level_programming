#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function adds all the arguments
 *
 * @n: place holder for arguments
 * *...: many more arguments to sum
 * Return: Sum
 */

/* Add all arguments and return sum until zero */

int sum_them_all(const unsigned int n, ...)

/* va_list declares a variable, args, which we use to manipulate arglist */
{
	va_list args;

	unsigned int i, sum = 0;
/* va_start line init args variable with function's last fixed argument n */
	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
/* va_arg() fetches the next argument form the argument list */
		sum = (sum + va_arg(args, int));
/* va_end(args) ends the function */
	va_end(args);
	return (sum);
}
