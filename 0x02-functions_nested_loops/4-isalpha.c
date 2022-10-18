#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 *
 * File: 4-isalpha.c
 * Auth: Zuahir Ahmed
 *
 * Return: Success 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
