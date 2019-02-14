#include <stdio.h>

/**
 * main - prints the value of multiples
 * @ i: integer
 * @ j: integer
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	printf("%i\n", j);
	return (0);
}
