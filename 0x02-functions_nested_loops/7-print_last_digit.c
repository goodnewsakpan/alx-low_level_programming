#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 * @p: required integer
 * Return: 0.
 */

int print_last_digit(int p)
{
	int last_digit;

	last_digit = p % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
