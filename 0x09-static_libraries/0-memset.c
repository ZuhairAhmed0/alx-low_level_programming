#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: poniter
 * @b: value to be set.
 * @n: number of bytes
 *
 * File: 0-memset.c
 * Auth: Zuhair Ahmed
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
