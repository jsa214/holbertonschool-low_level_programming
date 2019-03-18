#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add -  returns the sum of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)

{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub -  returns the diffrence of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: difference of a and b
 */


int op_sub(int a, int b)

{
	int difference = 0;

	difference = (a - b);
	return (difference);
}

/**
 * op_mul -  returns the product of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)

{
	int product = 0;


	product = (a * b);
	return (product);
}

/**
 * op_div -  result the division of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	int division = 0;

	division = a / b;
	return (division);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: remainder of division of a and b
 */

int op_mod(int a, int b)

{
	int modulus = 0;

	modulus = a % b;
	return (modulus);
}
