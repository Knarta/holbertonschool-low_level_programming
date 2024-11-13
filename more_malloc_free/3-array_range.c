#include "main.h"

/**
 * array_range - allocates memory for an array
 *
 * @min: integer
 * @max: integer
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int taille = max - min + 1;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(taille * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < taille; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
