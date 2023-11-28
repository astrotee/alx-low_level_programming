/* vim: set noet ts=8 sw=8: */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* copy - copy f1 to f2
* @f1: the src file name
* @f2: the dst file
* Return: error code
*/
ssize_t copy(const char *f1, const char *f2)
{
	int fin, fo, w;
	char buf[1024];

	fin = open(f1, O_RDONLY);
	if (fin < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
		return (98);
	}
	fo = open(f2, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
					S_IRGRP | S_IWGRP | S_IROTH);
	if (fo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't wirte to %s\n", f2);
		return (99);
	}
	while ((w = read(fin, buf, 1024)) > 0)
	{
		if (write(fo, buf, w) < w)
		{
			dprintf(STDERR_FILENO, "Error: Can't wirte to %s\n", f2);
			return (99);
		}
	}
	if (w > 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
		return (98);
	}
	if (close(fin) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fin);
		return (100);
	}
	if (close(fo) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo);
		return (100);
	}
	return (0);
}

/**
 * main - read argument and call copy
 * @argc: count of arguments
 * @argv: arguments values
 * Return: error code
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = copy(argv[1], argv[2]);

	exit(res);

	return (res);
}
