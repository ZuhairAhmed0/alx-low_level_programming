#include "main.h"

/**
 * *rot13 -  function that encodes a string using rot13.
 * @ptr: string
 *
 * File: 100-rot13.c
 * Auth: Zuhair Ahmed
 *
 * Return: encodes a string using rot13.
 */
char *rot13(char *ptr)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(ptr + i); i++)
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(ptr + i))
			{
				*(ptr + i) = b[j];
				break;
			}

		}
	return (ptr);
}
