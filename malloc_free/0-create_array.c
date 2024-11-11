#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates array of chars initializes it with a specific char
 * @size: size of memory to allocate
 * @c: character
 *
 * Return: if size 0 return NULL else return the pointeur
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL || size == 0)
		return (NULL);

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
