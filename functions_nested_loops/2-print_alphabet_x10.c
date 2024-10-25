#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	int ch;
	int digit;

	for (digit = 0; digit < 10; digit++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);

		}
		_putchar('\n');
	}

}
