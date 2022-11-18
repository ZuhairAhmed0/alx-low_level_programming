#include "3-calc.h"
#include <sdtio.h>
#include <stdlib.h>

/**
 * op_add - sum two numbers
 * @a: number one
 * @b: number two
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtruct tow numbers
 * @a: number one
 * @b: number two
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply tow numbers
 * @a: number one
 * @b: number two
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divid tow  numbers
 * @a: number one
 * @b: number two
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo tow numbers
 * @a: number one
 * @b: number two
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
