#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads and prints the content of a text
*                 to the standard output.
* @filename: Pointer name of the file to read.
* @letters: No of letters to read and print from the file.
*
* Return: The actual no of letters read and printed from the file,
*         or 0 if the function doesnt succeed or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buffer;

if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

n_read = read(fd, buffer, letters);
if (n_read == -1)

{
free(buffer);
close(fd);
return (0);
}

n_written = write(STDOUT_FILENO, buffer, n_read);

if (n_written == -1 || n_written != n_read)

{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (n_written);
}
