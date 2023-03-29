#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, j, z;

	j = 0;
	j = 0;

	while (s[j])
		j++;

	z = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[z];
		s[z--] = temp;
	}
}
