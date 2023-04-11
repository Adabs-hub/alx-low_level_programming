#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

	int _putchar(char c);
	unsigned int _strlen(const char *b);
	ssize_t read_textfile(const char *filename, size_t letters);

#endif /*main.h*/