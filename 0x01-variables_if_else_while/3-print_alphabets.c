#include <stdio.h>
/**
 * main - Entry point
 * Description: "prints the alphabet in lowercase and in uppercase."
 * Return: 0 checks passed
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	int b = 65;

	while (b <= 90)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
