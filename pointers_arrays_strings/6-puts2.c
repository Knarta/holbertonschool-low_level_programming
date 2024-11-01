#include "main.h"

/**
 * puts2 - print only even character
 *
 * @str : the pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		len++;
	}
	_putchar('\n');
}

