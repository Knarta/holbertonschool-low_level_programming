#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z';)
	{
		putchar(ch++);
	}

	putchar('\n');

	return (0);
}
