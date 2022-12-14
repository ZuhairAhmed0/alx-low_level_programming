#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an arra
 * @nmemb: This is the number of elements to be allocated
 * @size: This is the size of element
 *
 * File: 2-calloc.c
 * Auth: Zuhair Ahmed
 *
 * Return: NULL If nmemb or size is 0 or funcation fails
 *	Success pointer to the allocated memor
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	unsigned int id;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	mem = ptr;

	for (id = 0; id < (nmemb * size); id++)
	{
		mem[id] = '\0';
	}

	return (ptr);
}
