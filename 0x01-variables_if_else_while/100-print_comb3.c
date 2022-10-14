#include  <stdio.h>

/**
 * main - program that prints all possible different combinations of two digit
 *
 * File: 100-print_comb3.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 49; num2 <= 48; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
