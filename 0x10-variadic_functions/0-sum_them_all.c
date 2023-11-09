#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	int sum = 0;

	va_start(args, n); /* Initialize the argument list. */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* Get the next argument value. */

	va_end(args); /* Clean up. */

	return (sum);
}
