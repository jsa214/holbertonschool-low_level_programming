#include "holberton.h"

int is_palindromehelper(int i, int j);

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: strung being checked
 * Return: 0 or 1
 */

int is_palindrome(char s)

{
	if (i == j)
		return (1);
	if (s[i] != s[j])
		return (0);
	if (i < j + 1)
		return (is_palindromehelper(s, i + 1, j - 1));
	return (1);
}

/**
 * is_palindrome - function used to find palindrome
 *
 * @s: string to check for match
 * @i: start of string being checked
 * @j: end of string
 * Return: 1 for match and 0 for no match
 */

int is_palindromehelper(int i, int j)
{
	if (i = j)
		return (1);
	else
		return (0);
}
