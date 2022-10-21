#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * File: 10-print_triangle.c
 * Auth: Zuhair Ahmed
 */
void print_triangle(int size)
{
	int i, j, x;

	for (i = 0; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			putchar(' ');
		}
		for (x = 0; x < i; x++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	putchar('\n');
}
