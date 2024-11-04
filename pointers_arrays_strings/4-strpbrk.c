#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: res
 */

char *_strpbrk(char *s, char *accept)
{
	char *res = s;
	int i = 0;

	while (*res != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			
			if (*res == accept[i])
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
