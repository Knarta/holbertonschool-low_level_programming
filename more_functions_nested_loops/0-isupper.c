#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: input the function
 *
 * Return: 1 if c lowercase else 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	
	else
	{
		return (0);
	}
}
