#ifndef DEF_LETTERS
#define DEF_LETTERS
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
