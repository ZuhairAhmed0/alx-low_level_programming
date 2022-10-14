#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * File: 7-print_tebahpla.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
