#include "main.h"

/**
 * prime_number_recursion - function whitch does the prime number recursion
 *
 * @n: number to test
 *
 * @A: number to compare
 *
 * Return: 1 if n is prime 0 otherwise
 */

int prime_number_recursion(int n, int A)
{
	if (n == A)
		return (1);
	if (n % A == 0)
		return (0);
	if (n % A != 0)
		return (prime_number_recursion(n, A + 1));

	return (0);
}

/**
 * is_prime_number - function to make the recursion simpler
 *
 * @n: integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0 || n == 1)
		return (0);
	else
		return (prime_number_recursion(n, 2));
}
