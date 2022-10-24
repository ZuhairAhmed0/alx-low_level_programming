#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * File: 1-swap.c
 * Auth: Zuhair Ahmed
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
