#include <stdio.h>

/**
 * main - program that prints all numbers of base 10 starting from 0
 *
 * File: 5-print_numbers.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
