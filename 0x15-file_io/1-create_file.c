#include "main.h"

/**
* create_file - Creates a file and writes the specified text to it.
* @filename: Point name of the file to create.
* @text_content: Point to  text to be written to file
*
* Return: 1 on positive result, or -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;
size_t len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

n_written = write(fd, text_content, len);
if (n_written == -1)
{
close(fd);
return (-1);
}

close(fd);

return (1);
}
