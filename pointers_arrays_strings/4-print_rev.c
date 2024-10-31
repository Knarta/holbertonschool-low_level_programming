#include "main.h"

/**
 * print_rev - print the string in reverse
 *
 * @s: the pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len >= 0)
	{
		len--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
