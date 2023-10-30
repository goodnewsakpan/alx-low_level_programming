#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int y = 0, p = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	y = 0;
	p = 0;

	if (s1)
	{
		while (y < len1)
		{
			s3[y] = s1[y];
			y++;
		}
	}

	if (s2)
	{
		while (y < (len1 + len2))
		{
			s3[y] = s2[p];
			y++;
			p++;
		}
	}
	s3[] = '\0';

	return (s3);
}
