#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	Char smallletter = 'a';
	
	while (smallletter <= 'z');
	{
		_putchar(smallletter);
		smallletter++;
	}
	_putchar('\n');

	return (0);
}
