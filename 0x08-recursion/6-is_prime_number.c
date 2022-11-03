#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * File: 6-is_prime_number.c
 * Auth: Zuhair Ahmed
 *
 * Return: If the integer is not prime - 0
 *	If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int i, c = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}
	if (c == 2)
		return (1);
	return (0);
}
