#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string
 * Return: 1 on success, -1 on failure
 * (file can not be created,
 * file can not be written,
 * write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t text;
	int m;
	if (filename == -1)
		return (-1);
	m = open(filename, O_CREATE | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (m == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		text = write(m, text_content, strlen(text_content));
		if (text == -1)
		{
			close(m);
			return (-1);
		}
	}
	close(m);
	return (1);
}
