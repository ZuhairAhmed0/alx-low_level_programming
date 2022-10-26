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
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (ptr[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (ptr[indx1] == leet[indx2] || ptr[indx1] - 32 == leet[indx2])
				ptr[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (ptr);
}
