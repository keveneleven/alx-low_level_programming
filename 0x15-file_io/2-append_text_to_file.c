#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text
 * at the end of a file
 * @filename: name of file
 * @text_content: null terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	ssize_t word;

	if (filename == NULL)
		return (-1);
	if (text_context == NULL)
		return (1);
	m = open(filename, O_WRONLY | O_APPEND);
	if (m == -1)
	{
		return (-1);
	}
	word = strlen(text_content);
	if (write(m, text_content, word) != word)
	{
		close(m);
		return (-1);
	}
	close(m);
	return (1);
}
