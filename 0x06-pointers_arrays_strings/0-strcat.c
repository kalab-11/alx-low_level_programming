#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: to add string
 * @dest: string destination.
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
