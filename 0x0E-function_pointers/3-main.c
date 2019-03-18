#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - prints any operaation called
 *
 * @sa: variable for num
 * @ba: variable pointer for character
 *
 * Return: int num
 */

int main(int sa, char **ba)
{
	int i, j;
	int num;
	int (*operation)(int, int);

	if (sa != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*ba[2] == '/' || *ba[2] == '%') && *ba[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(ba[1]);
	j = atoi(ba[3]);
	operation = get_op_func(ba[2]);

	num = operation(a, b);
	printf("%d\n", num);
	return (0);
}
