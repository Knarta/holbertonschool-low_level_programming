#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse the string
 *
 * @s: The pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;

	}
}
