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

int op_add(int a, int b);

{
	return (a + b);
}

/**
 * op_sub -  returns the diffrence of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: difference of a and b
 */


int op_sub(int a, int b);

{
	return (a - b);
}

/**
 * op_mul -  returns the product of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: product of a and b
 */

int op_mul(int a, int b);

{
	return (a * b);
}

/**
 * op_div -  result the division of a and b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: result of division of a and b
 */

int op_div(int a, int b);

{
	if (b == 0)
	{
		printf("Error/n");
	}
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 *
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: remainder of division of a and b
 */

int op_mod(int a, int b);

{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a % b);
}
