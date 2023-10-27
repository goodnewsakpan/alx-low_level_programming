#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: returns a string
 */

char *_strcat(char *dest, char *src)
{
	int b, p;

	b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[b] = src[p];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
