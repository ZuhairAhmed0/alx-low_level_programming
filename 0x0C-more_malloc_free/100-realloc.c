#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and fre
 * @ptr: pointer
 * @old_size: the old size of pointer
 * @new_size: the new size of pointer
 *
 * File: 100-realloc.c
 * Auth: Zuhair Ahmed
 *
 * Return: If new_size == old_size - pt
 *	If new_size == 0 and ptr is not NULL - NULL
 *	Otherwise - a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cp, *ptr_filter;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cp = ptr;
	mem = malloc(sizeof(*ptr_cp) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_filter = mem;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr_filter[i] = *ptr_cp++;
	}
	free(ptr);
	return (mem);
}
