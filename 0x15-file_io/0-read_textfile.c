#include "main.h"

/**
 * read_textfile - is a function that read an print a txt to posix
 * @filename: is a pointer to txt file name
 * @letters: is a pointer to number of letters to be printed
 * Return: 0 If Null Or Actual Number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ch;

	if (filename == NULL)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ch, letters);
	w = write(STDOUT_FILENO, ch, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ch);
		return (0);
	}

	free(ch);
	close(o);

	return (w);
}
