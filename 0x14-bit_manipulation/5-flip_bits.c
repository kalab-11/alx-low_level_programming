#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j;

	for (j = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			j++;
	}

	return (j);
}
