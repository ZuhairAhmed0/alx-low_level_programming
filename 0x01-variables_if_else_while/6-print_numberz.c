#include <stdio.h>

/**
 * main - program that prints all numbers of base 10 starting from 0
 *
 * File: 6-print_numberz.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar('0' + ch);
	putchar('\n');
	return (0);
}
