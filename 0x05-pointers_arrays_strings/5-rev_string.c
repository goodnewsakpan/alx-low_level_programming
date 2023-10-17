#include "main.h"

/**
 * rev_string - reverse the order of a string
 * @s: pointer to string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length = 0;
	int b;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (b = 0; b < length / 2; b++)
	{
		temp = s[b];
		s[b] = s[length - b - 1];
		s[length - b - 1] = temp;
	}
}
