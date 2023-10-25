#include "main.h"

/**
 *  _pow_recursion - returns the value of x raise to y.
 * @x: base value
 * @y: exponential.
 * Return: the result of x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return ((x) * int _pow_recursion(x, y - 1));
	}
}
