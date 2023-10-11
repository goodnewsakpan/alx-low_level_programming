#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98.
 * @c: the first number
 * return: 0.
 */
void print_to_98(int c)
{
	int i;

	if (c <= 98)
	{
		for (i = c; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = c; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
