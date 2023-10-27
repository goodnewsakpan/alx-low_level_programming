#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to another
 * @dest: receiving string
 * @src: originating string
 * @n: number of bytes of str to concatenate
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, p;

	j = 0;
	p = 0;
	while (dest[j] != '\0')
		j++;

	while (src[p] != '\0' && p < n)
	{
		dest[j] = src[p];
		j++;
		p++;
	}

	dest[j] = '\0';

	return (dest);
}
