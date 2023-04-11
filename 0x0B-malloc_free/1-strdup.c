#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string
 * Return : st (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *st;

	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
	
		return (NULL);

	while (str[j])
		
		j++;

	st = malloc(sizeof(char) * (j + 1));

	if (st == NULL)
		
		return (NULL);

	while ((st[i] = str[i]) != '\0')
		
		i++;

	return (j);
}
