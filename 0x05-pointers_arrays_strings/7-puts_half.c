#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 *
 * File: 7-puts_half.c
 * Auth: Zuhair Ahmed
 */
void puts_half(char *str)
{
	int n, len = strlen(str);

	for (n = len / 2; n < len ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
