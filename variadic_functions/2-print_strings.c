#include "variadic_functions.h"

/**
 * print_strings - print number the function
 * @separator: character separator integer
 * @n: unsigned integer
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *ptr = va_arg(args, char*);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
