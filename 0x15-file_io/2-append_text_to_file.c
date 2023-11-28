#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t w_check;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND, mode);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		w_check = write(file_d, text_content, len);
		if (w_check == -1)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);

	return (1);
}
