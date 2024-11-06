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
	argv[0] = argv[0];

	printf("%d\n", argc - 1);

	return (0);
}
