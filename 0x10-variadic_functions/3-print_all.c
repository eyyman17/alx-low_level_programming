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
	int i, j = 0;
	char *s, *sep = "", c;

	va_start(args, format);

	if (format != NULL)
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
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
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
