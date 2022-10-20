#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 *
 * File: 102-fibonacci.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long t1 = 0, t2 = 1, nextTerm;

	for (i = 0; i < 50; i++)
	{
		nextTerm = t1 + t2;
		printf("%lu", nextTerm);

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
