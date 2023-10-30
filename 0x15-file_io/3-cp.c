#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#define bufflen 1024
#include "main.h"

/**
 * std_errs - deals with the standard errors.
 *
 *@num: file descriptor or exit status number.
 *@str: file name. can be for file_to or file_from or NULL.
 * Return: 97,98,99,100 depending on num (Success)
 */
int std_errs(int num, char *str)
{
int value;

switch (num)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
value = 97;
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
value = 98;
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
value = 99;
break;
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", num);
value = 100;
break;
}
return (value);
}
/**
 * main - copies the content of a file to another file.
 *
 *@argc: number of arguments.
 *@argv: array of size argc. Contains arguments.
 * Return: 0 (Success)
 * 97, 98, 99, 100 on failure.
 */
int main(int argc, char **argv)
{
int fd_to, fd_from, val;
char *file_to, *file_from, buffer[bufflen];

if (argc != 3)
exit(std_errs(97, NULL));
file_from = argv[1];
file_to = argv[2];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
exit(std_errs(98, file_from));
fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
exit(close(fd_from) == -1 ? std_errs(fd_from, NULL) : std_errs(99, file_to));
val = read(fd_from, &buffer, bufflen);
while (val != 0)
{
if (val == -1)
exit(close(fd_from) == -1 ? std_errs(fd_from, NULL) :
close(fd_to) == -1 ? std_errs(fd_to, NULL) :
std_errs(98, file_from));
if (write(fd_to, &buffer, val) == -1)
exit(std_errs(99, file_to));
val = read(fd_from, &buffer, bufflen);
}
return (close(fd_from) == -1 ? std_errs(fd_from, NULL) :
close(fd_to) == -1 ? std_errs(fd_to, NULL) : 0);
}
