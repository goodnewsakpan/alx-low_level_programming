#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to sum all unsigned integers
 * @n: number of parameters
 * @...: number of parameters to calculate
 * Return: if n == 0 - 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(args, n); /* Initialize the argument list. */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* Get the next argument value. */

	va_end(args); /* Clean up. */

	return (sum);
}
