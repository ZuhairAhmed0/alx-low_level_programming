#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @ptr: string
 *
 * File: 5-string_toupper.c
 * Auth: Zuhair Ahmed
 *
 * Return: uppercase letters
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
	return (ptr);
}
