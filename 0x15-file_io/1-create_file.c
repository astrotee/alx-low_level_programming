/* vim: set noet ts=8 sw=8: */
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* create_file - create file and write to it
* @filename: the name of the file
* @text_content: content to write
* Return: 1 on success -1 of failure
*/
int create_file(const char *filename, char *text_content)
{
	int fo, c = 0;
	int ret = 1;

	if (!filename)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo < 0)
		return (-1);

	while (text_content && text_content[c])
		c++;

	if (write(fo, text_content, c) < c)
		ret = -1;

	close(fo);

	return (ret);
}
