#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for int
 * @array: value for int
 * @size: value
 * @cmp: function pointer
 * Return: return -1, b or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}

