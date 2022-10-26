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
	int i = 0, g;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(pts + i))
	{
		if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z')
		{
			if (i == 0)
				*(ptr + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(ptr + i - 1))
						*(ptr + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (ptr);
}
