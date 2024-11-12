#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy of the string given as a parameter
 *
 * @str: pointer
 *
 * Return: copied pointer or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *s;
	int taille;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	taille = j + 1;

	s = malloc(taille * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < taille)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
