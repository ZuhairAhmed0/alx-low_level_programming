#include "dog.h"
#include <stdlib.h>

char *_strcopy(char *dest, char *src);

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *n_dog;
	int name_size = 0, onwer_size = 0, i;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	while (*name++)
		name_size++;

	while (*owner++)
		owner_size++;

	n_dog = malloc(sizeof(dot_t));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (name_size + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (owner_size + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcopy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcopy(n_dog_owner, onwer);

	return (n_dog);
}

