#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints value of adding num 1 and num2
 *
 * @argc:  Prints the number of things passed in cmd line
 * @argv: prints the number of values in the array
 * Return: 0 for success or 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
	printf("%d\n", result);
	return (0);
}
