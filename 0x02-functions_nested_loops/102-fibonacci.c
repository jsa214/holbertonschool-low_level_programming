#include <stdio.h>

/**
 * main - prints the fibonacci
 *
 * Fibonacci: integer representing where 1st number is
 * Return: 0
 */

int main(void)

{

	int Fibonacci[15], i;

	Fibonacci[0] = 0;
	Fibonacci[1] = 1;

	for (i = 2; i < 50; ++i)
		Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

	for (i = 1; i < 50; ++i)
		printf("%i\n, ", Fibonacci[i]);

	return (0);

}
