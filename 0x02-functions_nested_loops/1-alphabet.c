#include "main.h"
#include <unistd>

/**
 * main - Write a function that prints the alphabet, in lowercase
 *
 * File: 1-alphabet.c
 * Auth: Zuahir Ahmed
 *
 * Retur: Success 0
 */
itn main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
