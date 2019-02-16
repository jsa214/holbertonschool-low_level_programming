#include <stdio.h>

/**
 * main - function for fizz_buzz
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 101)
	{
		if (i <= 100)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buzz");
			else
				printf("%d", i);
			if (i == 100)
				break;
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
