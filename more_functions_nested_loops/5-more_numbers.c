#include "main.h"

/**
 * more_numbers - prints times the numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int digit;

	for (digit = 0; digit < 10; digit++)
	{

		for (i = 0; i <= 14; i++)

		{
			if (i > 9)

			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');

	}
}
