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
 * Return: Always 0 
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("%s\n", "Error");
	return (0);
}
