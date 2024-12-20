#include "main.h"

/**
 * _calloc - allocates mamery for an array
 *
 * @nmemb: unsigned integer
 * @size: unsigned integer
 *
 * Return: concatenated string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
