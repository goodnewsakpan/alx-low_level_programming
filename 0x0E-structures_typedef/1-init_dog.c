#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: pointer to struct
 * @owner: the owner of the dog
 * @age: the age of the dog
 * @name: name of dog
 * Return: no return value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
