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

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

