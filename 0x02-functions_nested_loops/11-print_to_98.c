#include "main.h"

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98
 * @n: number start
 *
 * File: 11-print_to_98.c
 * Auth: Zuahir Ahmed
 *
 * Return: all number from n to 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i >= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
}
