#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integer
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int stock;

	for (i = 0; i < n / 2; i++)
	{
		stock = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = stock;
	}
}
