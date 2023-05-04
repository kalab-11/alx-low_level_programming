#include "main.h"
/**
 * get_bit - gives the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index);

	if (index > 32)
	return (-1);
	return (i & 1);
}
