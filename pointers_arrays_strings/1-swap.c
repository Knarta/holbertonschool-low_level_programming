#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values
 *
 *@a : pointer
 *
 *@b : pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
