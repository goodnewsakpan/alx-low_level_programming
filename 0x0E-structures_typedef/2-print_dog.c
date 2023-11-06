#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print struct dog
 * @d: struct dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
