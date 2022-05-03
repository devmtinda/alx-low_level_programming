#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: contents to be saved in file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t ret;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		ret = write(fd, text_content, i);

		if (ret == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
