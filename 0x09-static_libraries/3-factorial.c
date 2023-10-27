#include "main.h"

/**
 * factorial - this function returns the factorial of a value
 * @n: the number representing the factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return ((n) * factorial(n - 1));
	}
}
