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
	char *tmp;
	char *res = haystack;
	char *n;

	if (*needle == '\0')
		return (res);

	while (*res != '\0')
	{
		if (*res == *needle)
		{
			tmp = res;
			n = needle;

			while (*n == *tmp && *n != '\0')
			{
				n++;
				tmp++;
			}
			if (*n == '\0')
                        {
                                return (res);
                        }
		}
		res++;
	}
	return (NULL);
}
