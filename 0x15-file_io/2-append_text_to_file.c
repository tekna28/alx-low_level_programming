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
 * append_text_to_file - appends text at the end of a file.
 *
 *@filename: name of the file.
 *@text_content: NULL terminated string to add at the end of the file.
 * Return: 1 (Success)
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, length;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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
