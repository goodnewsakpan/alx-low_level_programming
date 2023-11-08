#include "3-calc.h"

/**
 * op_add - function to add two numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract b from a
 * @b: the number to suntract
 * @a: the number to be subtracted from
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply a by b
 * @a: first number
 * @b: second number
 * Return: the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to dividde a by b
 * @a: number to be divided
 * @b: divider
 * Return: the result of the divided number
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divide a by b
 * @a: the first number to be divided
 * @b: the divider
 * Return: the remainer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
