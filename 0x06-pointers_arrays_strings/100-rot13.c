#include "main.h"


/**
 * rot13 - function that encodes a string using rot13
 * @str: String.
 * Return: Always 0.
 */

char *rot13(char *str)
{
	int i;
	int j;
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == s1[j])
				str[i] = s2[j];
	return (str);
}

