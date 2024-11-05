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
	int i = 0;

	if (*needle == '\0')
		return (res);

	while (*res != '\0')
	{
		if (*res == *needle)
		{
			tmp = res;

			i = 0;

			while (needle[i] == tmp[i] && needle[i] != '\0')
			{
				i++;
			}
			if (needle[i] == '\0')
                        {
                                return (res);
                        }
		}
		res++;
	}
	return (NULL);
}
