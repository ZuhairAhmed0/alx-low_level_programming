#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @ptr: string
 *
 * File: 6-cap_string.c
 * Auth: Zuhair Ahmed
 *
 * Return: capitalizes all words
 */
char *cap_string(char *ptr)
{
	int i;

	while (ptr[i])
	{
		while (!(ptr[i] >= 'a' && ptr[i] <= 'z'))
			i++;

		if (ptr[i - 1] == ' ' ||
				ptr[i - 1] == '\t' ||
				ptr[i - 1] == '\n' ||
				ptr[i - 1] == ',' ||
				ptr[i - 1] == ';' ||
				ptr[i - 1] == '.' ||
				ptr[i - 1] == '!' ||
				ptr[i - 1] == '?' ||
				ptr[i - 1] == '"' ||
				ptr[i - 1] == '(' ||
				ptr[i - 1] == ')' ||
				ptr[i - 1] == '{' ||
				ptr[i - 1] == '}' ||
				i == 0)
			ptr[i] -= 32;
		i++;
	}
	return (ptr);
}
