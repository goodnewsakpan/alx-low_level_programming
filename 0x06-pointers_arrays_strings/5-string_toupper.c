#include "main.h"

/**
 * string_toupper - a function that changes all cases
 * @c: pointer to a string
 *
 * Return: char pointer to converted string
 */

char *string_toupper(char *c)

{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (*c[a] >= 96 && c < 123)
		{
			c[a] -= 32;
		}
	}
	return (c);
}
