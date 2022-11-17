#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct form_t - Struct form_t
 * @c: data type
 * @f: The function associated
 */

typedef struct form_t
{
	char *c;
	void (*f)(va_list *);
} my_format;

char _putchar(char *c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list *);
void p_int(va_list *);
void p_float(va_list *);
void p_string(va_list *);

#endif
