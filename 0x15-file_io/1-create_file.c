#include "main.h"

/**
 * create_file -  is a function that creates a file
 * @filename: is a pointer to file name
 * @text_content: is a pointer to null terminated string
 * Return: -1 If Fail Or 1 If Success
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, counter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
			counter++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
