#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: Header file containing all prototypes functions
 *	written in the 0×15-file_io dir
 */

#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
