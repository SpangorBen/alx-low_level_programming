#include "main.h"

/**
 * append_text_to_file - Entry point
 * Description: Appends text at the end of a file
 * @filename: The name of the file to be read
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, my_write, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		my_write = write(fd, text_content, i);
		if (my_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
