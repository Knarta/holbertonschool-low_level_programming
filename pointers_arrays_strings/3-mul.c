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
	int x;
	int y;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;

		if (((x > 0 && y > 0) || (x < 0 && y < 0)) && result < 0)
			result = INT_MAX;
		if (((x < 0 && y > 0) || (x > 0 && y < 0)) && result > 0)
			result = INT_MIN;

		printf("%d\n", result);
	}
	return (0);
}
