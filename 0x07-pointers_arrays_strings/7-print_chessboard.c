#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: 2D array
 * File: 7-print_chessboard.c
 * Auth: Zuhair Ahmed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
			_putchar(a[i][j]);
		if (i < 7)
			_putchar('\n');
	}
}
