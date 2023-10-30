#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates 2 dimensional array of integers
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **ah;
	int y, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ah = (int **) malloc(sizeof(int *) * height);

	if (ah == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		ah[y] = (int *) malloc(sizeof(int) * width);
		if (ah[y] == NULL)
		{
			free(ah);
			for (j = 0; j <= y; j++)
				free(ah[j]);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (j = 0; j < width; j++)
		{
			ah[y][j] = 0;
		}
	}
	return (ah);
}
