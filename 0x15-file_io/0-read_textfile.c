#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 *@s: string.
 * Return: length of a string (Success)
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 *
 *@filename: name of the file that will be read and printed.
 *@letters: the number of letters it should read and print.
 * Return: the actual number of letters it could
 * read and print (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t letterss;
char *buffer;
fd = open(filename, O_RDONLY);
if (filename == NULL)
return (0);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
if (read(fd, buffer, letters) == -1)
{
free(buffer);
return (0);
}
letterss = _strlen(buffer);
letterss = write(STDOUT_FILENO, buffer, letterss);
if (letterss == -1)
{
free(buffer);
return (0);
}
free(buffer);
return (close(fd) == -1 ? -1 : letterss);
}
