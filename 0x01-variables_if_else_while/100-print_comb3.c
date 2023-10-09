#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digitcombo1, digitcombo2;

	for (digitcombo1 = 0; digitcombo1 <= 8; digitcombo1++)
	{
		for (digitcombo2 = digitcombo1 + 1; digitcombo2 <= 9; digitcombo2++)
		{
			putchar(digitcombo1 + '0');
			putchar(digitcombo2 + '0');

			if (digitcombo1 != 8 || digitcombo2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}


	}
	putchar('\n');
	return (0);
}
