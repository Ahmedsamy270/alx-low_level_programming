#include "main.h"

/**
 * append_text_to_file - is a function that appends text at the end of file
 * @filename: is a pointer to the file name
 * @text_content: is apointer to null terminated string
 * Return: -1 If Null Or 1 If Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, counter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
			counter++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
