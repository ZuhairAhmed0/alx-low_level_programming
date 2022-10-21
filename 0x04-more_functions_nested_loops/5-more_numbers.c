#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * File: 5-more_numbers.c
 * Auth: Zuhair Ahmed
 */
void more_numbers(void)
{
	int i, c, y, x;

	for (i = 0; i < 10; i++)
	{
		y = 0;
		x = 0;
		for (c = 48; c < 63; c++)
		{
			if (!(c > 57))
			{
				y = c;
			}
			else
			{
				y = c - 10;
				x = 49;
				_putchar(x);
			}
			_putchar(y);
		}
		_putchar('\n');
	}
}
