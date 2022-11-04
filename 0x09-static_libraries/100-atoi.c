#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 *
 * File: 100-atoi.c
 * Auth: Zuhair Ahmed
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
