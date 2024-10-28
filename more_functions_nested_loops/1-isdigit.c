#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *
 * @c: integer the calculate
 *
 * Return: if the digit return 1 else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
