#include "main.h"

/**
 * main - Program entry point
 *
 * Return: 0
 *
 */

void print_alphabet(void)
{
	int ch;

	for ( ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
