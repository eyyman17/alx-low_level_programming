#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file name
 * @letters: numbers of letters it should read and print
 *
 * Return: the number of letters it could read and print, 0 if it fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	char *buffer;
	ssize_t bytesRead;

	if (filename == NULL)
		return (0);

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(filed);
		return (0);
	}
	bytesRead = read(filed, buffer, letters);
	if (bytesRead == -1)
	{
		close(filed);
		free(buffer);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bytesRead);

	close(filed);
	free(buffer);

	return (bytesRead);
}
