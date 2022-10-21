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

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				putchar(' ');
			}
			for (x = 0; x < i; x++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
