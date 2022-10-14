#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * File: 3-print_alphabets.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
