#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ps1, ps2, psout, i;

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

	psout = ps1 + n;

	sout = malloc(psout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < psout; i++)
		if (i < ps1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ps1];

	sout[i] = '\0';

	return (sout);
}
