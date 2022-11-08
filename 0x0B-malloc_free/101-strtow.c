#include "main.h"

/**
 * strtow - function that splits a string into word
 * @str: string
 *
 * File: 101-strtow.c
 * Auth: Zuhair Ahmed
 *
 * Return: NULL if str == NULL or str == "" or funcation fails
 *	pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i;
	char *words;

	if (str == NULL || str == "")
		return (NULL);

	words = malloc(sizeof(char));

	if (words == 0)
		return (NULL);


