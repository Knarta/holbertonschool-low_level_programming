#include "main.h"

/**
 * print_last_digit - calcule the last digit
 *
 * @n: integer to calculate
 *
 * Return: the value of the lastDigit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = n * -1;
	}

	lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}
