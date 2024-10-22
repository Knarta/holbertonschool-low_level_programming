#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			ch = ch;

		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
