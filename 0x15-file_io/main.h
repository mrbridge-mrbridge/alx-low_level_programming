#ifndef _FILE_IO_
#define _FILE_IO_

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void printerr(char *msg, char *file, int status);

void ptitle(char *title);
void printmagic(char *buffer);
void printclass(char *buffer);
void printdata(char *buffer);
void printversion(char *buffer);
void printos(char *buffer);
void printabversion(char *buffer);
void err(char *msg);

#endif
