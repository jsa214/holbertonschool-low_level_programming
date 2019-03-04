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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d", result);
	printf("\n");
	return (0);
}
