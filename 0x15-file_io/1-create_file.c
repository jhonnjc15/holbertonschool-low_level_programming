#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
*create_file - function that creates a file.
*@filename: the file to create.
*@text_content: the text that will be in the file.
*Return: 1 on success, -1 on failure
*On error, -1 is returned, and errno is set appropriately.
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t open_text, write_text;
	int num_char;

	if (filename == NULL)
		return (-1);

	open_text = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (open_text == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
			text_content = "";
		num_char = strlen(text_content);
		write_text = write(open_text, text_content, num_char);
		if (write_text == -1)
		{
			close(open_text);
			return (-1);
		}
	}
	close(open_text);
	return (1);
}
