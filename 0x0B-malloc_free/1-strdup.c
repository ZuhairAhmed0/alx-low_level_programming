#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memor
 *	which contains a copy of the string given as a parameter.
 * @str: string to be copy
 *
 * File: 1-strdup.c
 * Auth: Zuhair Ahmed
 *
 * Return: NULL if str = NUL
 *	NULL if insufficient memory was available
 *	pointer to the duplicated string on Success
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(char) * (strlen(str)-1));

	if (duplicate == NULL)
		return (NULL);

	duplicate = strdup(str);

	return (duplicate);
}
