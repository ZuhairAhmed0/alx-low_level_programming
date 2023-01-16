#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: the pointer to the destination
 * @src: This is the string to be copied.
 * @n: the number of of characters to be copied
 *
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
