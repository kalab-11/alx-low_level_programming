#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: "A code that prints the last digit"
 * Return: 0 checks passed
 */
int main(void)
{
	int n;
	int X;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	X = n % 10;

	if (X == 0)
		printf("Last digit of %d is %d and is 0\n", n, X);
	else if (X > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, X);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, X);
	return (0);
}
