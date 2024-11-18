#include "function_pointers.h"

/**
 * int_index - search of integer
 * @array: pointer array
 * @cmp: pointer of function
 * @size: size of array
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
