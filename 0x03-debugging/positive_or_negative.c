#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description : "To check if the number is +ve or -ve"
 * Return: Always 0 checks passed
 */
int positive_or_negative(int i)
{

	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
