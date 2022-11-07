#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * File: 2-str_concat.c
 * Auth: Zuhair Ahmed
 *
 * Return: pointer content s1 and s2 or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, len = 0;
	char *str;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			len++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			len++;
	}

	if (len == 0)
		return (NULL);

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (i = 0; s2[i]; i++)
		str[i] = s2[i];

	return (str);
}
