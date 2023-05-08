#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* This function creates a buffer of size of 1024 bytes for reading data.
* The buffer is used to read data from a file if the buffer cannot be allocated an error message is dis   played
* If allocation fails, it prints an error message and exits the program with code 1.
*/
char *create_buffer(void) {
char *buffer = malloc(1024);

if (buffer == NULL) {
perror("Error: Unable to allocate memory for buffer.");
exit(1);
}

return buffer;
}

// Closes file descriptor passed as a parameter.
// Should closing the file fails, prints an error message and exits the program with code 1.
void close_fd(int fd) {
if (close(fd) == -1) {
perror("Error: Unable to close file descriptor.");
exit(1);
}
}

// Copies the contents of one file to another file.
// Should the number of arguments be incorrect, it prints a usage message and exits the program with code 1.
// Incase the source file cannot be opened or read, it prints an error message and exits the program with code 1.
// Incase the destination file cannot be created or written to, it prints an error message and exits the program with code 1.
int main(int argc, char *argv[]) {
if (argc != 3) {
fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
exit(1);
}

char *buffer = create_buffer();
int source_fd = open(argv[1], O_RDONLY);
int dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (source_fd == -1) {
perror("Error: Unable to open source file.");
exit(1);
}

if (dest_fd == -1) {
perror("Error: Unable to create or write to destination file.");
exit(1);
}

ssize_t read_size, write_size;

do {
read_size = read(source_fd, buffer, 1024);

if (read_size == -1) {
perror("Error: Unable to read from source file.");
free(buffer);
exit(1);
}

write_size = write(dest_fd, buffer, read_size);

if (write_size == -1) {
perror("Error: Unable to write to destination file.");
free(buffer);
exit(1);
}
} while (read_size > 0);

free(buffer);
close_fd(source_fd);
close_fd(dest_fd);

return 0;
}

