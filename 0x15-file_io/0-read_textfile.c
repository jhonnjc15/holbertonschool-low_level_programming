#include "holberton.h"

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
*read_textfile - function that reads a text file and prints it to stdout.
*@filename: the file to read.
*@letters: the numbers of letters to print.
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_text, read_text, write_text;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	open_text = open(filename, O_RDONLY);

	if (open_text == -1)
	{
		return (0);
	}
	else
	{
		read_text = read(open_text, buf, letters);
		if (read_text == -1)
		{
			free(buf);
			close(open_text);
			return (0);
		}
		else
		{
			write_text = write(STDOUT_FILENO, buf, read_text);
			if (write_text == -1)
			{
				free(buf);
				close(open_text);
				return (0);
			}
		}
	}
	free(buf);
	close(open_text);
	return (write_text);
}
