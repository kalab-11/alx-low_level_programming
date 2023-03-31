#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1 == *s2)
	{

		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	cmp = *s1 - *s2;

	return (cmp);
}
