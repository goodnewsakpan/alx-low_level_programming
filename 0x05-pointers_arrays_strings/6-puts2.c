#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: string to be printed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0' && str[j + 1] != '\0')
	{
		_putchar(str[j]);
		j += 2;
	}

	_putchar('\n');
}
