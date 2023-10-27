#include "main.h"
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
		_putchar('\n');
		return (0);

		else
		{
			_putchar(' ');	
		}
	}
}
