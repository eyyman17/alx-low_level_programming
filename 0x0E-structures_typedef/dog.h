#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines new type called dog
 * @name: pointer
 * @owner: pointer
 * @age: float
 **/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
