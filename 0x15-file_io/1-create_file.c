#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_form;
	int file_len;

	if (filename == NULL)
	{
		return (-1);
	}
	file_form = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_form == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		file_len = strlen(text_content);
		if (write(file_form, text_content, file_len) != file_len)
		{
			close(file_form);
			return (-1);
		}
	}
	close(file_form);
	return (1);
}
