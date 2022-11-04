#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * File: 1-strncat.c
 * Auth: Zuhair Ahmed
 *
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
