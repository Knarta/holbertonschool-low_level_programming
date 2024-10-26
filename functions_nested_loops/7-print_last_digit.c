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

	lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar('0' + lastDigit);

	return (lastDigit);
}
