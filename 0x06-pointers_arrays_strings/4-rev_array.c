#include "main.h"

/**
 * reverse_array - this function reverses an array.
 * @a: an input array.
 * @n: number of elements of the array.
 * Return: 0.
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int aux;

	while (j < n--)
	{
		aux = a[j];
		a[j++] = a[n];
		a[n] = aux;

	}
}
