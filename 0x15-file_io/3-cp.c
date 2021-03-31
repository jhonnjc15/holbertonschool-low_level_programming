#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
* main-check the code for Holberton School students.
* @argc: the number of all the parameter.
* @argv: the parameters.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	ssize_t open_text, open_text2, write_text, read_text;
	ssize_t _close, _close2;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_text = open(argv[1], O_RDONLY);
	if (open_text == -1)
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]), exit(98);
	open_text2 = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (open_text2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]), exit(99);
	else
	{
		while ((read_text = read(open_text, buf, 1024)) > 0)
		{
			write_text = write(open_text2, buf, read_text);
			if (read_text != write_text)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		if (read_text == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	_close = close(open_text);
	if (_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from file %d\n", (int)open_text), exit(99);
	_close2 = close(open_text2);
	if (_close2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from file %d\n", (int)open_text2), exit(99);
	return (0);
}
