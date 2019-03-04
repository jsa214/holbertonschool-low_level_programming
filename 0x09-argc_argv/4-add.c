#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints value of adding num 1 and num2
 *
 * @argc:  Prints the number of things passed in cmd line
 * @argv: prints the number of values in the array
 * Return: 0 for success or 1 for error
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
