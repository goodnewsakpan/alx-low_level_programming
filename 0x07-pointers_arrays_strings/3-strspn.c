#include "main.h"

/**
 * *_strspn - gets the length of a prefix
 * @s: string to evaluate
 * @accept: string containing the list of characters to match
 *
 * Return: number of bytes in the initial segment
 * of s with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int b, c, d, drag;

	f = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		drag = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				d++;
				drag = 1;
			}
		}
		if (drag == 0)
		{
			return (d);
		}
	}

	return (0);
}
