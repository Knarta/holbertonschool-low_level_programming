#include "main.h"

/**
 * times_table - print digit
 *
 * Return: void
 */

void times_table(void)
{
	int dig;
	int num;
	int res;

	for (dig = 0; dig <= 9; dig++)
	{
		_putchar('0');

		for (num = 0; num <= 9; num++)
		{
			res = dig * num;

			_putchar(',');
			_putchar(' ');

			if (res <= 9)
				_putchar(' ');
			else

				_putchar('0' + (res / 10));
			_putchar('0' + (res % 10));
		}
		_putchar('\n');
	}
}
