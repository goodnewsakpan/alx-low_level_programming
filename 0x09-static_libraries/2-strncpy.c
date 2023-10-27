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

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; n > j; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
