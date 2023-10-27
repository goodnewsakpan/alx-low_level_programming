#include <stdio.h>

/**
 * main - prints all received arguments
 * @argc: count the arguments
 * @argv: argument vctor
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
