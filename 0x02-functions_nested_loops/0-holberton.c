#include "holberton.h"

/**
 *main - print string "Holberton"
 *
 *Return: 0
 */

int main(void)

{
	char string[] = "Holberton\n";
	int index = 0;

	while (string[index])

	{
		putchar(string[index]);
		index++;

	}

	return (0);

}
