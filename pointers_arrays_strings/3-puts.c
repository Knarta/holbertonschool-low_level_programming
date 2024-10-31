#include "main.h"

/**
 * _puts - function prints a string
 *
 * @str : the pointe
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
