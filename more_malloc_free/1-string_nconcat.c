#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned integer
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int taille_s1 = 0;
	unsigned int taille_s2 = 0;
	char *s;
	unsigned int taille = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[taille_s1] != '\0')
		taille_s1++;
	while (s2[taille_s2] != '\0')
		taille_s2++;
	if (n >= taille_s2)
		n = taille_s2;
	taille = taille_s1 + n + 1;
	s = malloc(taille * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < taille_s1; i++)
		s[i] = s1[i];
	for (; i < taille; i++)
	{
		s[i] = s2[j];
		j++;
	}
	return (s);
}
