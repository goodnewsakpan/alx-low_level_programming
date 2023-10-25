#include "main.h"

/**
 * _puts_recursion - this function prnts a string with new line
 * @s: pointer to a string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

	char str[] = "Life is beautiful!";

	_puts_recursion(str);
	return (0);
}
