#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big, or 1 if not
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
