#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: counter start
 *
 * Return: void
 */
void print_to_98(int n)
{
	int cpt;

	if (n <= 98)
	{
		for (cpt = n; cpt <= 97; cpt++)
		{
			printf("%d, ", cpt);
		}
		printf("98\n");
	}

	else
	{
		for (cpt = n; cpt >= 97; cpt--)
		{
			printf("%d, ", cpt);
		}
		printf("98\n");
	}
}
