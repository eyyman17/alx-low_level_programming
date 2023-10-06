#include <stdio.h>

/**
 * customPrint - Prints a string to the standard output.
 * @str: The input string to be printed.
 */

void customPrint(const char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: 1 on success.
 */

int main(void)
{
	const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	customPrint(*m);
	return (1);
}
