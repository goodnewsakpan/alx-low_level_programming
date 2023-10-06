#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	j = (n % 10);

	printf("Last digit of %d is %d ", n, j);

	if (j > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (j == 0)
	{
		printf("and is zero\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
