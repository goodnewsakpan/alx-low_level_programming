#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers with new line
 * @a: the array to be printed
 * @n: number of elements to print.
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
	printf("\n");
}
