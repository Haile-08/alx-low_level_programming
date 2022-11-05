#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>

#include <unistd.h>

typedef long int ssize_t;
ssize_t read_textfile(const char *filename, size_t letters);

#endif
