#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * File: 101-natural.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int results;
	int num;

	results = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			results += num;
	}
	printf("%lu\n", results);
	return (0);
}
