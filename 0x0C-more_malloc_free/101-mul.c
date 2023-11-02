#include "main.h"

int is_valid_digit(char c) 
{
	return c >= '0' && c <= '9';
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 * contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error");
		_putchar('\n');
		
		return (98);
	}
	
	char *num1 = argv[1];
	char *num2 = argv[2];
	
	for (int i = 0; num1[i] || num2[i]; i++)
	{
		if (!is_valid_digit(num1[i]) || !is_valid_digit(num2[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}
	
	int product = _atoi(num1) * _atoi(num2);
	_printf("%d\n", product);
	
	return 0;
}

