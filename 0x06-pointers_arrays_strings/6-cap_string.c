#include "main.h"

/**
 * cap_string - capitalize each word on the string
 * @str: string
 * Return: 'str'
 */

char *cap_string(char *str)
{
	int b, p;
	int caps;
	char locs[] = ",;.!?(){}\nt\" ";

	for (b = 0, caps = 0; str[b] != '\0'; b++)
	{
		if (str[0] > 96 && str[0] < 123)
			caps = 1;
		for (p = 0; locs[p] != '\0'; p++)
		{
			if (locs[p] == str[b])
				caps = 1;
		}

		if (caps)
		{
			if (str[b] > 96 && str[b] < 123)
			{
				str[b] -= 32;
				caps = 0;
			}
			else if (str[b] > 64 && str[b] < 91)
				caps = 0;
			else if (str[b] > 47 && str[b] < 58)
				caps = 0;
		}
	}
	return (str);
}
