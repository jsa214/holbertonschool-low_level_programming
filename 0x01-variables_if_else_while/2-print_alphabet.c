#include <stdio.h>

/**
 * main - Function prints alphabet
 *
 * putchar with space command creates a new line after the statement
 *
 */

int main(void)

{
	int c;

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}

	putchar('\n');
return (0);

}
