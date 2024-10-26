#include "main.h"

/**
 * jack_bauer - print hours and minutes
 *
 * @hours: calculate hours
 *
 * @minutes: calculate minutes
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0 ; hours < 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
		}
	}
}
