#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file
 * @text_content: content to be appended to file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t m;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		m = write(fd, text_content, len);
		if (m == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
