#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * File: 2-print_strings.c
 * Auth: Zuhair Ahmed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *airport;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		airport = va_arg(args, char *);

		if (airport == NULL)
			printf("(nil)");

		else
			printf("%s", airport);


		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	}

	printf("\n");
	va_end(args);
}
