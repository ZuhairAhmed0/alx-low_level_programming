#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * File: 4-strpbrk.c
 * Auth: Zuhair Ahmed
 *
 * Return: pointer str1 if matches one or null f no such found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
