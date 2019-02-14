#include<stdio.h>

/**
 * printf - prints the value of multiples
 *
 * @ i: integer
 * @ j: integer
 *
 * Returns: 0
 *
 */



{
	int i, j = 0;

	for (i = 0; i < 1024; i++)

		if (i % 3 == 0 || i % 5 == 0)

			j = j + i;

	printf("% i", j);

	return (0);

}
