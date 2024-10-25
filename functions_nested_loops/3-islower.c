#include "main.h"

/**
 * _islower - check if c is lowercase
 *
 * @c: input the function
 *
 * Return: 1 if c lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
