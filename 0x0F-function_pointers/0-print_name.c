#include "main.h"

/**
 * print_name - function that prints a name.
 *
 * @name: name
 * @(*f)(char *): function pointer.
 *
 * Return: Nothing.
 **/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
