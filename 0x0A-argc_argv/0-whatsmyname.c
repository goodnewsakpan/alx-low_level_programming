#include "main.h"
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
		int c = 0;

		while (argv[0][c] != '\0')
		{
			_putchar(argv[0][c]);
			c++;
		}
		_putchar(' ', '\n');

		return (0);

	}

}
