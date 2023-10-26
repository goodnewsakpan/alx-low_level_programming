#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer
 * Return: square root of int n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square recursion
 * @n: integer paramtr
 * @b: integer parameter
 * Return: int
 */

int _sqrt(int n, int b)
{
	if (n < 0)
		return (-1);
	if ((b * b) > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (_sqrt(n, b + 1));
}
