/* vim: set noet ts=8 sw=8: */
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - read file and print it
* @filename: the name of the file
* @letters: the number of letters to read
* Return: the number of printed characters of errorcode
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fin, w, c = 0;
	char buf[4096];
	size_t bufsize = (letters > 4096) ? 4096 : letters;

	if (!filename)
		return (0);
	fin = open(filename, O_RDONLY);
	if (fin < 0)
		return (0);

	while (letters > 0 && (w = read(fin, buf, bufsize)) > 0)
	{
		if (write(STDOUT_FILENO, buf, w) < w)
		{
			c = 0;
			break;
		}
		letters -= w;
		c += w;
	}

	close(fin);


	return (c);
}
