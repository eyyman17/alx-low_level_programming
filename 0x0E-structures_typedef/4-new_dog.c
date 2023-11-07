#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 *
 * @name: char
 * @age: float
 * @owner: owner
 *
 * Return: dog_t
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0, i, j;

	if (!name || age <= 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	while (owner[len2] != '\0')
		len2++;
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
	{
		dog->name[i] = name[i];
		dog->name[i] = '\0';

	dog->age = age;

	for (j = 0; owner[j]; j++)
	{
		dog->owner[j] = owner[j];
		dog->owner[j] = '\0';
	}
	return (dog);
}
