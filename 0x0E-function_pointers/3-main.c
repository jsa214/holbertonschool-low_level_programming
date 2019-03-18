#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - prints any operaation called
 *
 * @ac: variable for num
 * @av: variable pointer for character
 *
 * Return: 0 else
 */

int main(int ac, char **av)
{
	int a, b;
	int number;
	int (*operation)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*av[2] == '/' || *av[2] == '%') && *av[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	operation = get_op_func(av[2]);

	number = operation(a, b);
	printf("%d\n", number);
	return (0);
}
