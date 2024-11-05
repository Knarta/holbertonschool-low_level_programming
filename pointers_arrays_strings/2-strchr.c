#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: pointer
 *
 * @c: character to find
 *
 * Return: pointer of the sub string or NULL otherwise
 */

char *_strchr(char *s, char c)
{
	char *res = s;

	if (s == NULL)
		return (NULL);

	while (*res != '\0')
	{
		if (*res == c)
		{
			return (res);
		}
		res++;
	}

	if (*res == c)
	{
		return (res);
	}
	return (NULL);
}
