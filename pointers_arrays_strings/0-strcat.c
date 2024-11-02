#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * Return: rest
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < len1; i++)
	{
		dest[len2 + i] = src[i];
	}
	dest[len2 + i + 1] = '\0';

	return (res);
}
