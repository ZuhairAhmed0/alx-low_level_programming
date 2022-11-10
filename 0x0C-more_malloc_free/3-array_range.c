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

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)8
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
