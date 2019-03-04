#include <stdio.h>
#include "holberton.h"

/**
 * main - prints value of multiplying num 1 and num2
 *
 * @argc:  Prints the number of things passed in cmd line
 * @argv: prints the number of values in the array
 * Return: 0 for success or 1 for error
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result *= atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
