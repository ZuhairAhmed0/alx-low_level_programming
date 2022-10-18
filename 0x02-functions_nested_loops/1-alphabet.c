#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase
 *
 * File: 1-alphabet.c
 * Auth: Zuahir Ahmed
 *
 * Return: Success 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
