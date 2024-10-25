#include "main.h"
#include <stdio.h>

/**
 *_abs - calcul absolute value
 *
 * @r: integer to calculate
 *
 * Return: absolute value of r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
