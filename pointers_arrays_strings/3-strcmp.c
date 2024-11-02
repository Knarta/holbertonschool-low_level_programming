#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * Return: integer 0 if same and difference between char otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
