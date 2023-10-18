#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int pwrd[100];
	int b, add, a;

	add = 0;

	srand(time(NULL));

	for (b = 0; b < 100; b++)
	{
		pwrd[b] = rand() % 78;
		add += (pwrd[b] + '0');
		putchar(pwrd[b] + '0');
		if ((2772 - add) - '0' < 78)
		{
			a = 2772 - add - '0';
			add += a;
			putchar(a + '0');
			break;
		}
	}
	return (0);
}
