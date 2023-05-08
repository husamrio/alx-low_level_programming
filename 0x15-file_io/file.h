#ifndef _FILE_H
#define _FILE_H

#include "main.h"
/**
* slen - string length of the program
* @s: string length
* Return: length to be ..........
*/

__home int slen(char *s)
{
if (!*s)
return (0);
s++;
return (1 + slen(s));
}


/**
* create_buffer - Gives 1024 bytes for a buffer.
* @file: file name buffer is storing chars for.
*
* Return: A pointer to newly-allocated buffer.
*/

__home char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (!buffer)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
* close_file - Closes the file descriptor.
* @file_desc: File descriptor to be closed.
*/

__home void close_file(int file_desc)
{
int c;

c = close(file_desc);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
exit(100);
}
}
#endif
