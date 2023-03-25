#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: 0 checks passed
*/
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i <= num; i++)
{
		if (num % i == 0)
{
			num /= i;
			i--;
}
}
	printf("%ld\n", i);

	return (0);
}
