#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: pointer to the string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int count;

	count = 0;

	while (*str != '\0')
	{
		_putchar(str);
		count++;
	}
	_putchar("\n");
}
