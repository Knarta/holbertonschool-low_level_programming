#include "main.h"
/**
 * print_sign - print sign n
 *
 * @n: check positif or negatif
 *
 * Return: if 1 is greater 0 is == and -1 is less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}


}

