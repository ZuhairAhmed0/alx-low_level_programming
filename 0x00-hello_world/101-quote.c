<<<<<<< HEAD
/*
 * File: 101-quote.c
 * Auth: Zuhair Ahmed
 */
=======
#include <stdio.h>
>>>>>>> 3bae5df6904a4acc7cd97c95daf7bd5f3e909853
#include <unistd.h>
/**
<<<<<<< HEAD
 *  * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                  followed by a new line, to standard error.
 *   
 *  Return: Alw */
=======
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
>>>>>>> 3bae5df6904a4acc7cd97c95daf7bd5f3e909853
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
