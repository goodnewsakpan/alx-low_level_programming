#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints multiplication of two integers
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: returns 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int b, c, multi;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	c = atoi(argv[2]);
	multi = b * c;

	printf("%d\n", multi);
	return (0);
}
