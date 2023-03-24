#include "main.h"
#include <stdio.h>

/**
 *_isupper - Checks for uppercase characters.
 * @c: Int representing a character
 * Description: To check if c is uppercase using _isupper
 * Return: 1 if character is uppercase, 0 otherwise checks passed
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
