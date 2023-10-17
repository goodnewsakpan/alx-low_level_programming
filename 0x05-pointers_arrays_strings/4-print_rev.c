#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0;)
	{
		length--;
		_putchar(s[length]);

	}
	_putchar('\n');

}
