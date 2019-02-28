#include "holberton.h"

/**
 * factorial - print factorial of a number
 *
 * @n: number been checked for factorial
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
