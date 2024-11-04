#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copy memory area
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
