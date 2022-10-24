#include "main.h"
#include <string.h>

/**
 * print_array - fction that prints n elements of an array of integers
 * @a: Array
 * @n: number of elements of the array to be printed
 *
 * File: 8-print_array.c
 * Auth: Zuhair Ahmed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
