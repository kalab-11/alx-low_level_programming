#include <stdio.h>
/**
 * main - Entry point
 * Description: print all letters in lowercase but the letter 'q' and 'e'.
 * Return: 0 check passed
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x != 101 && x != 113)
			putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
