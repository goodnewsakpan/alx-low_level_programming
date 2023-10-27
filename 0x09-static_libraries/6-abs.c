#include "main.h"

/**
 * _abs - absolute value of integers
 * @b: required integer
 * Return: if greater, b lesser -b, else 0.
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b > 0)
		return (b);
	else
		return (0);
}
