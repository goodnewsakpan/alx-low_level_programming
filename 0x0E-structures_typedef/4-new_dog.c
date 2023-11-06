#include "dog.h"
#include <stdio.h>

/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ret;
	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
/**
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeo(dog_t));
	if  (!d)
		return (NULL);
	d->name = _strdup(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = strd(owner)
		return (free(d->d name), free(d), NULL);
	d-> age = age;

	return (owner);:wq
		git add
}
