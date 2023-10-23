#include "main.h"

/**
 * _strpbrk - searches  string for set of bytes
 * @accept: the set of bytes
 * @s: the string to search
 *
 * Return: pointer to matching byte.
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		char *i = accept;

		for (; *i != '\0'; i++)
		{
			if (*s == *i)
			{
				return (s);
			}
		}
	}

	return (NULL);
}
