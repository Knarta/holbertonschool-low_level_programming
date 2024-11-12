#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int taille;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	taille = i + j + 1;

	s = malloc(taille * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;

	while (i < taille - j - 1)
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < taille)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
