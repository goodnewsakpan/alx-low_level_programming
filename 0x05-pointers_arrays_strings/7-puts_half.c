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

	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(start[start]);
		start++;
	}

	_putchar('\n');
}