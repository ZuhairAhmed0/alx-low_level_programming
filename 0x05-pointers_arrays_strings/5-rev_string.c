#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 *
 * File: 5-rev_string.c
 * Auth: Zuhair Ahmed
 */
void rev_string(char *s)
{
	char str1[strlen(s)], str2[strlen(s)];
	char *p1, *p2;

	str1[strlen(s)] = *s;
	p1 = str1 + strlen(str1) - 1;
	p2 = str2;

	while (p1 >= str1)
	{
		*p2 = *p1;
		*p1--;
	}
	*p2 = '\0';
}
