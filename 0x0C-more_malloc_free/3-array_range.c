#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integer
 *
 * @min: start array
 * @max: stop array
 *
 * File: 3-array_range.c
 * Auth: Zuhair Ahmed
 * Return: NULL If min > max or its fails
 *	Success the pointer to the newly created arra
 */
int *array_range(int min, int max)
{
	int i, len, *ptr;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	len = 0;
	for (i = min; i <= max; i++)
	{
		ptr[len++] = i;
	}

	return (ptr);
}
