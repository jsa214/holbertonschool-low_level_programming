#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: Prints the number of things passed in cmd line
 * @argv: number or arguments in cmd line
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (!*argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}
