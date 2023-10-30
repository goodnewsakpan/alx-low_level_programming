#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
int money, coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
money = atoi(argv[1]);
while (money > 0)
{
	coins++;
	if ((money - 25) >= 0)
	{
		money -= 25;
		continue;
	}
	if ((money - 10) >= 0)
	{
		money -= 10;
		continue;
	}
	if ((money - 5) >= 0)
	{
		money -= 5;
		continue;
	}
	if ((money - 2) >= 0)
	{
		money -= 2;
		continue;
	}
	money--;
}
printf("%d\n", coins);
return (0);
}
