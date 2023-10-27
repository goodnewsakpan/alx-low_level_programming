#include "main.h"

/**
 * _memcpy - this function copies the area of memory.
 * @dest: this is the area of the memory destination
 * @src: this is the source of the area of memory
 * @n: this is the number of bytes to copy
 * Return: pointer to the memory destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
