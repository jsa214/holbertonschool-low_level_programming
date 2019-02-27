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

	sum1 = 0;
	for (i = 0; i < size; i++)
		sum1 += a[i * size + 1];
	printf("%d, ", sum1);
	sum2 = 0;
	for (i = 0; i < size; i++)
		sum2 += a[i * size + (size - i - 1)];
	printf("%d\n", sum2);
}
