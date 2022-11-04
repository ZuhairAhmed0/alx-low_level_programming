#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * File: 4-add.c
 * Auth: Zuahir Ahmed
 *
 * Return: 0 Success, 1 Error
 */
int main(int  argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (argv[i] > 'a' && argv[i] < 'z')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


