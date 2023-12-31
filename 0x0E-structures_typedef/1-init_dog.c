#include <stdio.h>
#include "dog.h"


/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer
 * @name : pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
