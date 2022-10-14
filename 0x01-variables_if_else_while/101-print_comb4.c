#include <stdio.h>

/**
 * main - program prints all possible different combinations of three digits
 *
 * File: 101-print_comb4.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, y;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{

			for (y = 50; y < 58; y++)
			{
				if (y > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(y);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
