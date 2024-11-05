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
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			tmp = haystack;
			n = needle;

			while (*n == *tmp && *n != '\0')
			{
				n++;
				tmp++;
			}
			if (*n == '\0')
                        {
                                return (haystack);
                        }
			printf("coucou\n");
		}
		printf("%c\n", *haystack);
		haystack++;
	}
	return (NULL);
}
