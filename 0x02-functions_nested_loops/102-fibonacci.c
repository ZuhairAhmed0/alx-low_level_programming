#!include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 *
 * File: 102-fibonacci.c
 * Auth: Zuhair Ahmed
 */
int main(void)
{
	int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		if (i == 2)
		{
			printf("%d", i);
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%d", nextTerm);

		if (i < n)
		{
			printf("\n");
		}
	}
}
