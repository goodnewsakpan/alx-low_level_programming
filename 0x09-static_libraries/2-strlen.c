#include "main.h"

/**
 * _strlen - function to return length of string.
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
