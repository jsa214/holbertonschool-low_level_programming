#include <stdio.h>

/**
 * main - prints all the nos of base16
 *
 * Return: 0 value (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
