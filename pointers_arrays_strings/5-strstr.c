#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack : pointer
 *
 * @needle: pointer
 *
 * Return: res
 */

char *_strstr(char *haystack, char *needle)
{
	char *res = haystack;
	int i = 0;

	while (*res != '\0')
	{
		for (i = 0; needle[i] == res[i];)
		{
			i++;
			if (needle[i] == '\0')
			{
				return (res);
			}
		}
		res++;
	}
	if (*res == '\0')
	{
		return (NULL);
	}
	return (res);
}
