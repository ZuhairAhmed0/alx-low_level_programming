#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define new dog
 * File: dog.h
 * Auth: Zuhair Ahme
 *
 * Desc: Define a new type struct dog with the following elements
 *	name, type = char *
 *	age, type = float
 *	owner, type = char *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
#endif
