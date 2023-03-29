#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: string to be converted.
 * Return: integer.
 */

int _atoi(char *s)
{
	int z = 1, i = 0;
	unsigned int j = 0;

	while (!(s[i] <= '9' && s[i] >= '0'))
	{
		if (s[i] == '-')
			z *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0'))
	{
		j = (j * 10) + (s[i] - '0');
		i++;
	}
	j *= z;
	return (j);
}
