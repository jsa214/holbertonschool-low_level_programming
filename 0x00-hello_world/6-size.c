#include <stdio.h>

/**
 * main - Printing size of variables
 * Return: sizeof should be 0
 */

int main(void)

{
	printf("size of a long long int %i byte(s)\n", sizeof(long long));
	printf("size of a char int %i byte(s)\n", sizeof(char));
	printf("size of a long int %i byte(s)\n", sizeof(long));
	printf("size of a float int %i byte(s)\n", sizeof(float));
	printf("size of an int int%i byte(s)\n", sizeof(int));

	return (0);

}
