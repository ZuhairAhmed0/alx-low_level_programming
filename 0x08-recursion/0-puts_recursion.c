#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to print
 *
 * File: 0-puts_recursion.c
 * Auth: Zuhair Ahmed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
