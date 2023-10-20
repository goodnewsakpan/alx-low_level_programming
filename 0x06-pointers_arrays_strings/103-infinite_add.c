#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b1 = 0, b2 = 0, bg, pr, li1, li2, tg = 0;



	while (*(n1 + b1) != '\0')
		b1++;
	while (*(n2 + b2) != '\0')
		b2++;
	if (b1 >= b2)
		pr = b1;
	else
		pr = b2;
	if (size_r <= pr + 1)
		return (0);
	r[pr + 1] = '\0';
	b1--, b2--, size_r--;
	li1 = *(n1 + b1) - 48, li2 = *(n2 + b2) - 48;
	while (pr >= 0)
	{
		bg = li1 + li2 + tg;
		if (bg >= 10)
			tg = bg / 10;
		else
			tg = 0;
		if (bg > 0)
			*(r + pr) = (bg % 10) + 48;
		else
			*(r + pr) = '0';
		if (b1 > 0)
			b1--, li1 = *(n1 + b1) - 48;
		else
			li1 = 0;
		if (b2 > 0)
			b2--, li2 = *(n2 + b2) - 48;
		else
			li2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
