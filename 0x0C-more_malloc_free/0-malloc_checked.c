#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *u;

	u = malloc(b);
	if (u == NULL)
		exit(98);
	return (u);
}
