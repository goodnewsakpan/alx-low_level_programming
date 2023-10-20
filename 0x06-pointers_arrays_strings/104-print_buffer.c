#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a 10 bytes of buffer per time,
 * start with the byte position,
 * then show hex content, then display printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte, number;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (number = 0; number < 10; number++)
		{
			if ((number + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + number + byte));
			if ((number % 2) != 0 && number != 0)
				printf(" ");
		}
		for (number = 0; number < 10; number++)
		{
			if ((number + byte) >= size)
				break;
			else if
				(*(b + number + byte) >= 31 && *(b + number + byte) <= 126)
				printf("%c", *(b + number + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
