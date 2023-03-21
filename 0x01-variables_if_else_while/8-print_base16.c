#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all numbers of base 16 in lowercase
 * Return: 0 checks passed
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
