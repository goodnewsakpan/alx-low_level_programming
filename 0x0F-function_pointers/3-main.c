#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to carry out basic arithmetic operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' || == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", get_op_func(op)(num1, num2));

	return (0);
}
