#include "main.h"

/**
 * _strlen - find string len
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * append_text_to_file - add text to the end of a file
 * @filename: filename
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_count, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		w_count = write(fd, text_content, len);
		if (w_count != len)
			return (-1);
	}
	close(fd);

	return (1);
}
