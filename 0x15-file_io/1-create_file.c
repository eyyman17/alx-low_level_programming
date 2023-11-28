#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IRUSR | S_IWUSR;
	int file_d;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_d == -1)
		return (-1);

	write(file_d, text_content, sizeof(text_content));

	close(file_d);

	return (1);
}
