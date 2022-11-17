#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_char- print char
 * @list: args
 */
void p_char(va_list *list)
{
	printf("%c", va_arg(*list, int));
}

/**
 * p_int - print integer
 * @list: args
 */
void p_int(va_list *list)
{
	printf("%i", va_arg(*list, int));
}

/**
 * p_float - print float
 * @list: args
 */
void p_float(va_list *list)
{
	printf("%f", va_arg(*list, double));
}

/**
 * p_string - print string
 * @list: args
 */
void p_string(va_list *list)
{
	char *str;

	str = va_arg(*list, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *	c: char
 *	i: integer
 *	f: float
 *	s: char *
 *
 * File:  3-print_all.c
 * Auth: Zuhair Ahmed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	my_format format_t[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j > 4)
		{
			if (format[i] == *format_t[j].c)
			{
				printf("%s", separator);
				format_t[j].f(&args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
