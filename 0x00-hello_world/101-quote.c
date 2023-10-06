#include <stdio.h>

/**
 * customPrint - Prints a string to the standard output.
 *
 * main - this function prints a string to the standard output.
 *
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

int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	customPrint(str);
	return (1);
}
