#include "main.h"

/**
 *  times_table - prints times table
 *  @n: printed value
 * Return: 0.
 */
void print_times_table(int n)
{
	int b, multi, r;
		if (b <= 15 || b >= 0)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				r = b * multi;
				if (r <= 99)
					_putchar(' ');

				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar((r / 10) % 10 + '0');
				}
	else if (r <= 99 || r >= 10)
	{
		_putchar((r / 10) + '0');
	}
		}	_putchar((r % 10) + '0');
		}
_putchar('\n');
			}
	}
}
