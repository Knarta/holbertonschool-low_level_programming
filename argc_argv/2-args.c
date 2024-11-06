#include "main.h"

/**
 * main - Program entry point
 *
 * @argc: total argument number
 *
 * @argv: argument list
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
