#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The count of arguments
 *
 * File: 0-sum_them_all.c
 * Auth: Zuhair Ahmed
 *
 * Return: 0 if n == 0 or sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, result = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);
	return (result);
}
