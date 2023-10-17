#include "main.h"

/**
 * strlen - function to return length of string.
 * @s: pointer to string
 * Return: length of string
 */

int_strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++; s++;
	}

	return (length);
}
