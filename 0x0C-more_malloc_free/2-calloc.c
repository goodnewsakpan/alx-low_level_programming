#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, return NULL.
 * if malloc fails, calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size);

	if (z == NULL)
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
		z[b] = 0;

	return (z);
}
