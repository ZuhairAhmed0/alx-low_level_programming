#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in revers
 * @s: string to revers
 *
 * File: 1-print_rev_recursion.c
 * Auth: Zuhair Ahmed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
