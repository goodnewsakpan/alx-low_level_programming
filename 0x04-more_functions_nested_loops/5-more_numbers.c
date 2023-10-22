#include "main.h"
/**
 * more_numbers - print the numners
 *
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; i <= 9; c++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
