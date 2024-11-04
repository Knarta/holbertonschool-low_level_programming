#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: ret
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
		{
			j++;
		}

		if ('\0' == accept[j])
		{
			return (ret);
		}

		else
		{
			ret = ret + 1;
		}
		i++;
	}
	return (ret);
}

