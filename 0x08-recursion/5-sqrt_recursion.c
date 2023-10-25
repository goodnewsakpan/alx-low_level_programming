#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer
 * Return: square root of int n.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return (_sqrt(n, i + 1));
	}
}
