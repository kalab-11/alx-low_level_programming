#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: count.
 * @av: vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int i, j, a, b;

	if (ac == 0)
	{
		return (NULL);
	}
	for (a = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			a++;
		a++;
	}

	aout = malloc((a + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = b = 0; b < a; j++, b++)
	{
		if (av[i][j] == '\0')
		{
			aout[b] = '\n';
			i++;
			b++;
			j = 0;
		}
		if (b < a - 1)
			aout[b] = av[i][j];
	}
	aout[b] = '\0';

	return (aout);
}
