#include "main.h"

/**
 * true_sqrt_recursion - function whitch does the true recursion
 *
 * @n: square root number to find
 *
 * @A: potential root number
 *
 * Return: A or - 1 otherwise
 */

int true_sqrt_recursion(int n, int A)
{
	if (A * A > n)
	{
		return (-1);
	}
	else if (A * A < n)
	{
		return (true_sqrt_recursion(n, A + 1));
	}
	else
	{
		return (A);
	}
}

/**
 * _sqrt_recursion - function for make the recursion simpler
 *
 * @n: integer
 *
 * Return: natural square root of n, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (true_sqrt_recursion(n, 0));
}
