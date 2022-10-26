#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @ptr: string
 *
 * File: 7-leet.c
 * Auth: Zuhair Ahmed
 *
 * Return: encodes a string
 */
char *leet(char *ptr)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(ptr + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(ptr + i))
				*(ptr + i) = b[j];
		}
	}
	return (ptr);
}
