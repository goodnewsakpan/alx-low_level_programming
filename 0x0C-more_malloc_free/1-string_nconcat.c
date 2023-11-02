#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: amount of bytes.
 *
 * Return: pointer to newly allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int ps1, ps2, pst, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ps1 = 0; s1[ps1] != '\0'; ps1++)
		;

	for (ps2 = 0; s2[ps2] != '\0'; ps2++)
		;

	if (n > ps2)
		n = ps2;

	pst = ps1 + n;

	st = malloc(pst + 1);

	if (st == NULL)
		return (NULL);

	for (i = 0; i < pst; i++)
		if (i < ps1)
			st[i] = s1[i];
		else
			st[i] = s2[i - ps1];

	st[i] = '\0';

	return (st);
}
