#include "main.h"

/**
 * create_buf - is a function that allocat 1024 byte to a buffer
 * @file: is the file name of the buffer
 * Return: Pointer To Buf
 */

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return	(buf);
}

/**
 * close_file - is a function that close
 * @fc: is the file to be closed
 */

void close_file(int fc)
{
	int i;

	i = close(fc);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", fc);
		exit(100);
	}
}

/**
 * main - is the main function that copies a content of file to an another
 * @argc: numbers of arguments
 * @argv: is array of pointers of arguments
 * Return: 0 If Success Or 97 If Argument Count Not Correct Or
 * 98 If File Cannot Read Or 99 If File Cannot Create
 *  Or 100 If File Cannot Close
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ch = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, ch, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(ch);
			exit(98);
		}

		w = write(to, ch, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(ch);
			exit(99);
		}

		r = read(from, ch, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(ch);
	close_file(from);
	close_file(to);

	return (0);
}
