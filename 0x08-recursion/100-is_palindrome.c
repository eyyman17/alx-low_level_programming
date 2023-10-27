#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if true, 0 if false.
 */

int is_palindrome(char *s)
{
return (pal(s, 0, _strlen_recursion(s)));
}

/**
 * pal - checks if a string is a palindrome
 *
 * @s: string
 * @start: first char of the string
 * @end: last char of the string
 *
 * Return: 1 if true, 0 if false.
 */

int pal(char s[], int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (pal(s, start + 1, end - 1));
}



/**
 * _strlen_recursion - returns length of a string.
 *
 * @s: the string.
 *
 * Return: len(s).
 **/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
