#include "main.h"

/**
 * _strncpy - srtring copy
 * @src: to add string
 * @dest: string destination.
 * @n: number of bytes
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n && dest[i])
		i++;

	return (dest);
}
