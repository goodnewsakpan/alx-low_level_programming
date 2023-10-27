#include <stdio.h>

/**
* main - prints number of arguments
*@argc: number of the arguments
*@argv:array of the arguments
*Return: the number of arguments
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
