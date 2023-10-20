include "main.h"

/**
 * leet - encodes string into 1337
 * @s: inputs a string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
	int count = 0, b;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + count) != '\0')
	{
		for (b = 0; b < 5; i++)
		{
			if (*(s + count) == lower_case[b] || *(s + count) == upper_case[b])
			{
				*(s + count) = numbers[b];
				break;
			}
		}
		count++;
	}
	return (s)

}
