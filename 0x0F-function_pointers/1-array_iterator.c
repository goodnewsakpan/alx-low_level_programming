#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * a function given as a parameter of an array
 * @size: the size of the array (size_t)
 * @action: a pointer to the function
 * @array:value of an int
 */

void array_iterator(int *array, size_t size, void (*action)(int));

size_t b;

if (action == NULL || array == NULL)
	return;

	for (b = 0; b < size; b++)
	action(array[b]);
