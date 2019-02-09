#include <stdio.h>

/**
* main - Print alphabet without q and e
*
* Return: 0 for success
 */

int main(void)

{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)

	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');
	return (0);

}
