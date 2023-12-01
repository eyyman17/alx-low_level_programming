#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0 on success.
 **/


int main(int argc, char *argv[])
{
	int file_d1, file_d2;
	char buffer[1024];
	ssize_t bytesRead;
	char *file_from = argv[1];
	char *file_to = argv[2];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_d1 = open(file_from, O_RDONLY);
	if (file_from == NULL || file_d1 == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);

	file_d2 = open(file_to, O_WRONLY | O_CREAT, mode);
	if (file_d2 == -1)
		dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);

	while ((bytesRead = read(file_d1, buffer, sizeof(buffer))) > 0)
		if (write(file_d2, buffer, bytesRead) == -1)
			dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);
        if (bytesRead == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);

	if (close(file_d1) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_d1), exit(100);
	if (close(file_d2) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_d2), exit(100);
	return (0);
}
