#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns a pinter to function
 * @s: operator passed as argument
 *
 * Description: Checks for corresponding sign with ptr
 * Return: A ptr to function that returns a calcy
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if ((*s == *(ops[i].op)) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
