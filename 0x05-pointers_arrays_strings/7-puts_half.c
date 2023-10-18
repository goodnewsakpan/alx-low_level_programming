#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string to be printed.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length = 0;
	int q, str;

	while (str[length] != '0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		str = length / 2;
	}

	_putchar('\n');
}
