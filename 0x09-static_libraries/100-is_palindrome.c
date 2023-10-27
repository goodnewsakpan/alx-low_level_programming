#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to a string
 * Return: recursion..
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p - palindrome
 * @s: pointer to a string
 * @q: position
 * Return: set
 */
int p(char *s, int q)
{
	if (q < 1)
	{
		return (1);
	}
	if (*s == *(s + q))
	{
		return (p(s + 1, q - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: int
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (p(s, length - 1));

}
