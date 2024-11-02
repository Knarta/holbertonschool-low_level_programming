#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a sgtring to int
 *
 * @s: pointer
 *
 * Return: res
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int j;
	int k;
	int conv;
	int res = 0;
	int p = 0;
	int l;
	int base10 = 1;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	j = i;
	while (s[i] >= '0' && s[i] <= '9')
	{
		i++;
	}
	for (k = i - 1; k >= j; k--)
	{
		conv = s[k] - '0';

		base10 = 1;

		for (l = 0; l < p; l++)
		{
			base10 = base10 * 10;
		}

		if (base10 > INT_MAX / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		else
		{
			res = res + conv * base10;
			p++;
		}
	}
	res = res * sign;
	return (res);
}






