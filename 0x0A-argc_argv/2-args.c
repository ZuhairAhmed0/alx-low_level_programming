#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: the array of array
 *
 * File: 2-args.c
 * Auth: Zuhair Ahmed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
