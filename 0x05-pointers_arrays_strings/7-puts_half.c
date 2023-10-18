#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string to be printed.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length, q, p;

	length = 0;

	while (str[length] != '0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (p = length / 2; str[p] != '\0'; p++)
		{
			_putchar(str[p]);
		}
	}
	else if (length % 2)
	{
		for (q = (length - 1) / 2; q < length - 1; q++)
		{
			_putchar(str[q + 1]);
		}
	}
	_putchar('\n');
}
