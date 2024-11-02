#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: integer
 *
 * Return: rest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *res = dest;

	while (src[len1] != '\0')
	{
		len1++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}

	if (n > len1)
		n = len1;

	for (i = 0; i < n; i++)
	{
		dest[len2 + i] = src[i];
	}
	dest[len2 + i + 1] = '\0';

	return (res);
}
