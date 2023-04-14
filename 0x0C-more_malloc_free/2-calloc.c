#include "main.h"

/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
