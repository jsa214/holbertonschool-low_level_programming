#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Function assigns rndm variable
 * and is last digit of number > 5
 * and is last digit of number < 5
 * and is last digit is zero = 0
 * $n: The number to be checked
 * 0: The number the is being compared
 *
 * Return: and is greater than 5 if Last
 */

int main(void)
{
	int n;
	int number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	number = n % 10;

	if (number > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
number);
	}
	else if (number == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, number);
	}
	else if (number < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
number);
	}
	return (0);
}
