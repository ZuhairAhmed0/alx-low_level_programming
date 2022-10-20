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
	int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%d", t1);
		}
		if (i == 2)
		{
			printf("%d", t2);
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%d", nextTerm);

		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
