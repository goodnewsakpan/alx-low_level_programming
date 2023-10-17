#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: pointer to the string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)

	{
		_putchar(str[q]);
	}
	_putchar("\n");
}
