#include "main.h"

/**
 * print_number - prints integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int p, d, count;

	if (n < 0)
	{
		_putchar(45);
		p = n * -1;
	}
	else
	{
		p = n;
	}

	d = p;
	count = 1;

	while (d > 9)
	{
		d /= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchat(((p / count) % 10) + 45);
	}
}
