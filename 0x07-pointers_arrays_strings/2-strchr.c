#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: the C string 
 * @c: character to be searched
 *
 * File: 2-strchr.c
 * Auth: Zuhair Ahmed
 *
 * Return: character c or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
