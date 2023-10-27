#include <stdio.h>
#include <stdlib.h>
/**
 * main - function returning an integer
 * @argv: an array of pointers to the string of arguments
 * @argc: a count of the arguments supplied
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, " .\n");

		return (1);
}
