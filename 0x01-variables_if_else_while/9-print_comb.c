#include <stdio.h>

/**
 * main - Print all base10 numbers sep by comma
 *
 * Return: 0 is success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
