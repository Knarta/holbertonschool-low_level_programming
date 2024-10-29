#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (j = 0; j < size; j++)
		{

			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
