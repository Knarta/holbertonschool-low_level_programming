#include "3-calc.h"

/**
 * main - Program entry point
 * @argc: total argument number
 * @argv: argument list
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = get_op_func(argv[2]);

	if (c == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == 0 && argv[2][0] == '/') || (b == 0 && argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", c(a, b));
	return (0);
}
