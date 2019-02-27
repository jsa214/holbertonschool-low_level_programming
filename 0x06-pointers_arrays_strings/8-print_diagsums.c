#include <stdio.h>

/**
 * print_diagsums - print sum of the two diagonals of perfect matrix
 *
 * @a: pointer to the start of the matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int len;

	i = 0;
	sum1 = sum2 = 0;
	len = size * size;
	while (i < len)
	{
		if (i % (size - 1) == 0 && i < len - 1 && i > 0)
			sum2 += *(a + i);
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
