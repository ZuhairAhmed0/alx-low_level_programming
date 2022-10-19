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
	int resluts, num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			resluts += num;
	}
	printf("%lu\n", resluts);
	return (0);
}
