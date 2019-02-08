#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Function to give if or else
 * is positive - Check if number > 0
 * is negative - Check if number < 0
 * is zero - Check if number = 0
 * $n: The number to be checked
 * 0: The number the is being compared
 *
 * Return: is negative if number < 0 otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
