#include "main.h"

/**
 * rev_string - reverse the order of a string
 * @s: pointer to string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	length = l;

	int l = 0;
	int b;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}

	for (b = 0; b < l / 2; b++)
	{
		temp = s[b];
		s[b] = s[l - b - 1];
		s[l - b - 1] = temp;
	}
}
