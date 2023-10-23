#include "main.h"

/**
 * _memset - fills memeory with a constant data type
 * @s: pointer to the memory area to fill
 * @b: the constant byte to fill
 * @n: the number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}
