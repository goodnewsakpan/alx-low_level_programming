#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: pointer to the string
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		*str++;
	}
	_puts("\n");
}
