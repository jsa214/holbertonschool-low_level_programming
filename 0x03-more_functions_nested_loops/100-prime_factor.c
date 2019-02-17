#include <stdio.h>

/**
 * main - function for max prime numbers
 * Return: 0
 */

int main(void)

{
	int i = 2;
	long int j = 612852475143;

	while (i < j)
	{
		while (j % i == 0)
		{
			j = j / i;
		}
		i++;
	}
	printf("%li\n", j);

	return (0);
}
