#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments of the program into string;
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac is 0, av is NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *ns;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	ns = malloc(sizeof(char) * size + 1);

	if (ns == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ns[index++] = av[arg][byte];

		ns[index++] = '\n';
	}

	ns[size] = '\0';

	return (ns);
}
