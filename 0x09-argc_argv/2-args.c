#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc:  Prints the number of things passed in cmd line
 * @argv: Unused parameters
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
