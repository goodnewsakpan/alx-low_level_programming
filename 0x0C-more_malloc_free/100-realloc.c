#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory.
 * @ptr: pointer to the old memory.
 * @old_size: size in bytes of the allocated space of ptr.
 * @new_size: new byte size of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, return ptr without changes.
 * if malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
