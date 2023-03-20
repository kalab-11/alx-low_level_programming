#include <stdio.h>
/**
 * main - Entry point
 * Description: "printing lowercase alphabet using putchar"
 * Return: 0 checks passed
*/
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
