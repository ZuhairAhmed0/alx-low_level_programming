#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 *
 * File: 3-factorial.c
 * Auth: Zuhair Ahmed
 *
 * Return: factorial n
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	fact *= n * factorial(n - 1);
	return (fact);
}
