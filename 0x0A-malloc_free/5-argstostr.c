#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr  - concatenate arguments given to progrom
 *
 * @ac: number of arguments given
 * @av: pointer to pointers
 * Return: ptr to str or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int count;
	int len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = ac + 1;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	ptr = malloc(sizeof(char) * len);
	ptr[0] = '\0';
	if (ptr == NULL)
		return (NULL);

	count = 0;
	for (i  = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++, count++)
			ptr[count] = av[i][j];
		ptr[count] = '\n';
		count++;
	}
	ptr[len - 1] = '\0';
	return (ptr);
}

/**
 * _strlen - Ret str length
 * @s: Str to find length
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
