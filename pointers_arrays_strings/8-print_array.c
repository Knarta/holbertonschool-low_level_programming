#include "main.h"

/**
 * print_array - print elements of an array of integers
 *
 * @a: pointer
 *
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
