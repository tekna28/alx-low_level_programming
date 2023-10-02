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
 * create_file - creates a file.
 *
 *@filename: name of the file to create.
 *@text_content: NULL terminated string to write to the file.
 * Return: 1 (Success)
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, length;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (close(fd) == -1 ? -1 : 1);
length = _strlen(text_content);

if (write(fd, text_content, length) != length)
{
close(fd);
return (-1);
}

return (close(fd) == -1 ? -1 : 1);
}
