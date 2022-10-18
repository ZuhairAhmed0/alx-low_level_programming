#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: this digit number
 *
 * File: 7-print_last_digit.c
 * Auth: Zuahir Ahmed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
