#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);

		if (digit != '9')
		{
		putchar(',');
		putchar(' ');
	}}

	return (0);
}
