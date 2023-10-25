#include "main.h"

/**
 * divider - checks if a number is divisible by 2
 * @i: integer
 * @j: integer
 * Return: Always 0.
 */

int divider(int i, int j)
{
	if (j % i == 0)
	{
		return (0);
	}
	else if (j / 2 > i)
	{
		return (divider(i + 2, j));
	}
	else
	{
		return (1);
	}
}

/**
 *  is_prime_number - checks if a number is divisible by 2
 * @n: integer
 * Return: int
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}

	else
	{
		return ((divider(3, n)));
	}
}
