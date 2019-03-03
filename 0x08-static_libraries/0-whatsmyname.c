#include <stdio.h>

/**
 * main - print program name
 * @argc: print number of things in command line
 * @argv: arguments printed
 * Return: 0 for success
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
