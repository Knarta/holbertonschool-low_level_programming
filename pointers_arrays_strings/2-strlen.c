#include "main.h"
#include <stdio.h>

/**
 * _strlen - eturns the length of a string
 *
 * @s: the string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
