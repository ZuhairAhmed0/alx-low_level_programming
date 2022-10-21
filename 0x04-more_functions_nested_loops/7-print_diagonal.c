#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: stop line
 *
 * File: 7-print_diagonal.c
 * Auth: Zuhair Ahmed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
