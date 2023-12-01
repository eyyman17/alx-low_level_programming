#include "main.h"

/*
 * cp_file - Copies the content of a file to another file
 *
 *
 * Return: 0 on Success.
 **/


int cp_file(int argc, char *argv[])
{
	int file_d1, file_d2;
	char buffer[1024], buffer2[];
	ssize_t bytesRead1, bytesRead2, write_check;
	char *file_from = argv[1];
	char *file_to = argv[2];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_d1 = open(file_from, O_RDONLY);
	if (file_d1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while ((bytesRead1 = read(file_d1, buffer, sizeof(buffer))) > 0)
	{
		buffer2 += buffer;
	}
	if (bytesRead1 == -1)
	{
		close(file_d1);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	file_d2 = open(file_to, O_WRONLY | O_CREAT, mode);
	if (file_d2 == -1)
	{
		dprint(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (ftruncate(file_d2, 0) == -1)
	{
		close(file_d2);
		dprint(2, "Error: Can't write to %s\n", file_to);
                exit(99);
	}

	write_check = write(file_d2, buffer2, sizeof(buffer));
	if (write_check == -1)
	{
		close(file_d2);
		dprint(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (close(file_d1) == -1)
	{
		dprint(2, "Error: Can't close fd %d\n", file_d1);
                exit(100);
	}
	if (close(file_d2) == -1)
	{
		dprint(2, "Error: Can't close fd %d\n", file_d2);
		exit(100);
	}
















