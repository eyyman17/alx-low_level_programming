#include <stdio.h>

/**
 * main - Entry point
 *
 * customPrint: Function that uses putchar to print character by character
 *
 * str : string
 *
 * Return: Always 0 (Success)
 */

void customPrint(const char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
	}
}
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	customPrint(message);
	return (1);
}
