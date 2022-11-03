#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 *
 * File: 5-sqrt_recursion.c
 * Auth: Zuhair Ahmed
 *
 * Return: If n has a natural square root - the natural square root of n
 *	If n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	int j = n / 2;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	while (j != i)
	{
		i = j;
		j = (n / i + i) / 2;
	}
	return (j);
}
