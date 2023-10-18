#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int b, c, q, length, p, num;

	b = 0;
	c = 0;
	q = 0;
	length = 0;
	p = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (b < length && p == 0)
	{
		if (s[b] == '-')
			++c;

		if (s[b] >= '0' && s[b] <= '9')
		{
			num = s[b] - '0';
			if (c % 2)
				num = -num;
			q = q * 10 + num;
			p = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			p = 0;
		}
		b++;
	}
	if (p == 0)
		return (0);
	return (q);
}
