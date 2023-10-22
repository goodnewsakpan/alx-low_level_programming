#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */

void print_number(int n)

{
	int i;
	int a = 1;
	unsigned int p = n;
	unsigned int y = n;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		y = n;
		p = n;
		p += 1;
		y += 1;
	}

	while (p != 0)
	{
		p = p / 10;
		c++;
	}
	for (i = 1; i < c; i++)
	{
		a *= 10;
	}
	for (i = 0; i < c; i++)
	{
		_putchar(y / a + '0');
		y = y % a;
		a = a / 10;
	}
}
