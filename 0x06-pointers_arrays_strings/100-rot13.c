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
	int i = 0;

	while (ptr[i])
	{
		if (ptr[i] >= 'A' && ptr[i] <= 'Z')
		{
			ptr[i] = 'A' + (ptr[i] - 'A' + 13) % 26;
		}
		else if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = 'a' + (ptr[i] - 'a' + 13) % 26;
		}
		i++;
	}
	return (ptr);
}
