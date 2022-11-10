#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using mallo
 * @b: size of poniter
 *
 * File: 0-malloc_checked.c
 * Auth: Zuhair Ahmed
 *
 * Return: size allocate in memory or function fails exit process on 9
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
