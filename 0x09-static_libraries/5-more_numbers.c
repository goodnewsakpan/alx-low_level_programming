#include "main.h"

/**
 * more_numbers - prints numbers multiple times
 * prints line of digits 10 times
 */

void more_numbers(void)
{
	int a, j;

	for (a = 0; a < 10; a++)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');

				j++;
		}

		_putchar('\n');
	}
}

