#include "main.h"

/**
 * *infinite_add - function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: use to store the result
 * @size_r: the buffer size
 *
 * File: 103-infinite_add.c
 * Auth: Zuhair Ahmed
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
