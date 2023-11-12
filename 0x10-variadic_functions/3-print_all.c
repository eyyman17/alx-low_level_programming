#include "variadic_functions.h"


/**
 * print_all - prints anything.
 *
 * @format: format.
 *
 * Return: Nothing.
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i, j = 0;
	float f;
	char *s, *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s%s", sep, s);
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
		}
	}
	va_end(args);
	printf("\n");
}
