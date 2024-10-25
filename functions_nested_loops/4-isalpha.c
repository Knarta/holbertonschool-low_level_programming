#include "main.h"

/**
 * _isalpha - check if lowercase and uppercase
 *
 * @c: input the function
 *
 * Return: 1 if c lowercase else 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
