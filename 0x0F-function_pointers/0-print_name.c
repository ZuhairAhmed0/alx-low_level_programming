#include "function_pointers.h"
/**
 * print_name - function that prints a nam
 * @name: name to be print
 * @f: function to pointer
 *
 * File: 0-print_name.c
 * Auth: Zuhair Ahmed
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
