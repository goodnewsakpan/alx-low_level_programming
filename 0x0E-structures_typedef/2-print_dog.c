#include <stdio.h>
#include "dog.h"
/**
 *
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", (*d).age ? d->age : "(nil)");
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
	return (0);
}
