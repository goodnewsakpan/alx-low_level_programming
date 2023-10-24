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
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
