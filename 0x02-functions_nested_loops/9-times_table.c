#include "main.h"

/**
 *  times_table - prints 9 times table
 * Return: 0.
 */

void times_table(void)
{
	int b, multi, r;

	for (b = 0; b <= 9; b++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
	{
			_putchar(',');
			_putchar(' ');
			r = b * multi;
			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
	_putchar('\n');
	}




}
