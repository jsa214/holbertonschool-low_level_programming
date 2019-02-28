#include "holberton.h"

int is_prime_numberhelperfunction(int n, int i);

/**
 * is_prime_number - checks whether number is prime
 *
 * @n: number being check for prime
 * Return: 0 or 1
 */

int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (is_prime_numberhelperfunction(n, n - 1));
}

/**
 * _is_prime_numberhelperfunction - used to calculate for prime
 *
 * @n: number to check for prime
 * @i: number to try calculate
 * Return: 1 or 0 for prime nos
 */

int is_prime_numberhelperfunction(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_numberhelperfunction(n, i - 1));
}
