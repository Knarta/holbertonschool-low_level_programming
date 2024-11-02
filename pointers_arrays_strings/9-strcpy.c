#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (ptr);
}
