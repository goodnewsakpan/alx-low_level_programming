#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of the string
 * @src: origin of string
 * @n: number of bytes to copy
 *
 * Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)

{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[p];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
