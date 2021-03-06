#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - Reads a text file and prints it to POSIX stdout.
* @filename: A pointer to the name of the file.
* @letters: The number of letters the
*           function should read and print.
* Return: If the function fails or filename is NULL - 0.
*         O/w - the actual number of bytes the function can read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, fd_read, fd_write;
char *buff;
if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
{
free(buff);
return (0);
}
fd_read = read(fd, buff, letters);
if (fd_read == -1)
return (0);
fd_write = write(STDOUT_FILENO, buff, fd_read);
if (fd_write == -1)
{
free(buff);
return (0);
}
if (fd_read != fd_write)
return (0);
free(buff);
close(fd);
return (fd_write);
}
