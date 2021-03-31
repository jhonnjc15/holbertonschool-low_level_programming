#include "holberton.h"

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
*append_text_to_file - function that appends text at the end of a file
*@filename: the file to read and write.
*@text_content: the text to add at the final of the file.
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t open_text, write_text;
	int num_char;

	if (filename == NULL)
		return (-1);
	open_text = open(filename, O_WRONLY | O_APPEND);

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
