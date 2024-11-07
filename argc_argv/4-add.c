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
	int conv;
	int sum = 0;
	char *end;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			conv = strtol(argv[i], &end, 10);
			if (*end != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + conv;
		}
		printf("%d\n", sum);
	}
	return (0);
}

