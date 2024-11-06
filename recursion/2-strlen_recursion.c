#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: pointer
 *
 * Return: returns the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	else
		return (0);
}
