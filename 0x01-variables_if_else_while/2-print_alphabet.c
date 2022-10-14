#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * File: 2-print_alphabet.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
