#include "function_pointers.h"

/**
 * print_name - a function that print a name
 * @name: pointer
 * @f: pointer of function
 *
 * Return: Nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if ( name && f)
		f(name);
}
