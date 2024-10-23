#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch;
	int digit;

	for (digit = '0'; digit <= '9';)
	{
		putchar(digit++);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
