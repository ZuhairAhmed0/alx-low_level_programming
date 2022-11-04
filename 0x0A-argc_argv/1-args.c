#include <stdio.h>

/**
 * main - prints the number of arguments passed into i
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * File: 1-args.c
 * Auth: Zuhair Ahmed
 *
 * Retrun always 
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0)
}
