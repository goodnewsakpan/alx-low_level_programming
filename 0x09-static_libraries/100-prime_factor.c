#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0
 *
 */

int main(void)
{
	unsigned int b = 2;
	unsigned long p = 612852475143;

	while (b != p)
	{
		if (p % b == 0)
		{
			p = p / b;
		}
		else
		{
			b++;
		}
	}
	printf("%lu\n", p);
	return (0);
}
