#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str : the pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	char *tmp = str;

	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}

	for (i = 0; *str != '\0'; i++)
	{
		if (i >= (len - 1) / 2 && len % 2 == 1)
		{
			_putchar(*str);
		}
		if (i >= len / 2 && len % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
