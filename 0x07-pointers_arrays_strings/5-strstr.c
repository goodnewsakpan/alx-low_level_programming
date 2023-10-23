#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search
 * @needle: the substring to search
 *
 * Return: pointer to the beginning or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *find = haystack;
		char *item = needle;

	while (*haystack && *item && *haystack == *item)
	{
		haystack++;
		item++;
	}

	if (!*item)
	{
		return (find);
	}

	haystack = find + 1;

	}

	return (NULL)
}
