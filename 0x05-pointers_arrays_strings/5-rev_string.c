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
	int leng, index = 0;
	char tmp;

	leng = strlen(s);

	for (index = leng - 1; index >= leng / 2; index--)
	{
		tmp = s[index];
		s[index] = s[leng - index - 1];
		s[leng - index - 1] = tmp;
	}
}
