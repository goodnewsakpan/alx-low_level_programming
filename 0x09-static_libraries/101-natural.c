#include <stdio.h>

/**
 * main - prints sum of natural multiples of 3 or 5 below 1024
 * Return: 0.
 */

int main(void)
{
	int sum = 0;
	int p;

	for (p = 0; p < 1024; p++)
	{
		if (p % 3 == 0 || p % 5 == 0)
		{
			sum += p;
		}
	}

	printf("%d\n", sum);

	return (0);
}
