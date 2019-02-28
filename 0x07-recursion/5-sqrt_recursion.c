#include "holberton.h"

int _sqrt_recursion_helperfunction(int n, int i);

/**
 * _sqrt_recursion - calculate the natural sqrt
 *
 * @n: the number we find the sqrt for
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helperfunction(n, 2));
}

/**
 * _sqrt_recursion_helperfunction - use to calculate
 *
 * @n: number to calculate sqrt for
 * @i: number to try calculate
 * Return: sqrt of n
 */

int  _sqrt_recursion_helperfunction(int n, int i)
{
	if (i * i > n || i * i < 0)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helperfunction(n, i + 1));
}
