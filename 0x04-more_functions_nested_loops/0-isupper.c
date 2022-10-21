#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to check
 *
 * File: 0-isupper.c
 * Auth: Zuhair Ahmed
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
