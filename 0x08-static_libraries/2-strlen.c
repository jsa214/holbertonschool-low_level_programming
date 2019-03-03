#include "holberton.h"

/**
 * _strlen - Swaps 2 integers
 *
 * @s: variable to check length
 *
 * Return: string length
 */

int _strlen(char *s)

{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;

	return (counter);

}
