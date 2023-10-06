#include <stdio.h>

/**
 * customPrint - Prints a string to the standard output.
 *
 * This function takes a null-terminated string as input and prints it to the standard output character by character, followed by a newline.
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
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	customPrint(message);
	return (1);
}
