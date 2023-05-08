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
 * create_file - creates a file and fills it with text
 * @filename: filename
 * @text_content: text to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_count, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
