#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the new array.
 * if man > mix, return NULL.
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *b;
	int u;

	if (min > max)
		return (NULL);

	b = malloc(sizeof(*b) * ((max - min) + 1));

	if (b == NULL)
		return (NULL);

	for (u = 0; min <= max; u++, min++)
		b[u] = min;

	return (b);
}
