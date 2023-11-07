#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function to reassign names to struct
 * @name: name of dog
 * @age: float age of dog
 * @owner: owner of dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", (*d).age);
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
