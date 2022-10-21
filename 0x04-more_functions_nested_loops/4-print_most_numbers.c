#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * File: 4-print_most_numbers.c
 * Auth: Zuhair Ahmed
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		_putchar(c);
	}
}
