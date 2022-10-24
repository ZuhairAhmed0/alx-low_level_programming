#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * @s: string
 *
 * File: 6-puts2.c
 * Auth: Zuhair Ahmed
 */
void puts2(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0)
			continue;
		 _putchar(s[i]);
	}
	_putchar('\n');
}
