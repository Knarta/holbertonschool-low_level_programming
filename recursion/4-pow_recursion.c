#include "main.h"

/**
 * _pow_recursion - calculate x power y
 *
 * @x: integer
 *
 * @y: integer
 *
 * Return: y pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
