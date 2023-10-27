#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition of positives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1if it fails;
 */

int main(int argc, char *argv[])
{
	int b, c, add = 0;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (argv[b][c] < '0' || argv[b][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[b]);
	}

	printf("%d\n", sum);

	return (0);
}
