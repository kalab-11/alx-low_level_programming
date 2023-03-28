#include "main.h"

/**
 * _strlen - Gives the length of a string
 * @s: string to check
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
