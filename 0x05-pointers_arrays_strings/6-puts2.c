#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: String
 */

void puts2(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i <= len - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
