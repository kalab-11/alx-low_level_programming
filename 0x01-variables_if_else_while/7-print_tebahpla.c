#include <stdio.h>
/**
 * main - Entry point
 * Description: "printing lowercase alphabet using in reverse"
 * Return: 0 checks passed
 */
int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
