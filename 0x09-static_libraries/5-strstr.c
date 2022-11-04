#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: small string to be searched
 *
 * File: 5-strstr.c
 * Auth: Zuhair Ahmed
 *
 * Return: small string to be searched
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
