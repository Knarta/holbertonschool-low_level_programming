#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
