#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * File: 3-mul.c
 * Auth: Zuhair Ahmed
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);

	return (0);
}
