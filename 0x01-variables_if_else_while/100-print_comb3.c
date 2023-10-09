#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digitcombo;

	for (digitcombo = 0; digitcombo <= 9; digitcombo++)
	{
		putchar(digitcombo + '0');
		if (digitcombo != 9)
	{
			putchar(',');
			putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}

