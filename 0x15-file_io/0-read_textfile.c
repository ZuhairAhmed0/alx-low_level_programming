#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints.
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * File: 0-read_textfile.c
 * Auth: Zuhair Ahmed
 *
 * Return: the actual number of letters it could read and print
 *	or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	close(o);

	return (w);
}
