#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates string character
 * @s: the string to be searched
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
