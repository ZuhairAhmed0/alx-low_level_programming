#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: arguments
 * @argv: double pointer to arguments
 *
 * File: 3-main.c
 * Auth: Zuhair Ahmed
 *
 * Return: The program prints the result of the operation
 *	if the number of arguments is wrong, print Error & exit with the status 98
 *	if the operator is none of the above, print Error &  exit with the status 99
 *	if the user tries to divide (/ or %) by 0, print Error &  exit(100)
 */
int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}

