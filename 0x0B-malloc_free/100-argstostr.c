#include "main.h"

/**
 * argstostr - concatenates all the arguments of your progra
 * @ac: The number of argument passed
 * @av: An array of pointers
 *
 * File: 100-argstostr.c
 * Auth: Zuhair Ahmed
 *
 * Return: NULL if ac == 0 or av == NULL or NULL if it fail
 *	or a pointer to a new strin
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
