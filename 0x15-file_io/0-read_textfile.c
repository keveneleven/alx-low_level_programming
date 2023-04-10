#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes, text;
	int m;

	if (filename == NULL)
		return (0);
	m = open(filename, O_RDONLY);
	if (m == -1)
		return (0);
	char buffer[letters];
	bytes = read(m, buffer, letters);
	if (bytes == -1)
	{
		close(m);
		return (0);
	}
	text = write(STDOUT_FILENO, buffer, bytes);
	if (text == -1 || text != bytes)
	{
		close(m);
		return (0);
	}
	close(m);
	return (bytes);
}
