#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
