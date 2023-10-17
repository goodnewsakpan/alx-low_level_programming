#include "main.h"

/**
 * _strlen - function to return length of string.
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
	}

	return (length);
}
