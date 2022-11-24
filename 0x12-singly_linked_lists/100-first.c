#include <stdio.h>

void __attribute__((constructor)) print_before(void);
/**
 * print_before - function that prints before
 *	the main function is executed.
 *
 * File: 100-first.c
 * Auth: Zuhair Ahmed
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
