#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - recopies a string
 * @str: string to be replicated
 * Return: the string to the duplicate
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
 * new_dog - initializes new dog
 * @name: the name of dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if  (!d)
		return (NULL);
	d->name = _strdup(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = _strd(owner);
	if (owner && !d->owner)
		return (free(d->name), free(d), NULL);
	d->age = age;

	return (d);
}
