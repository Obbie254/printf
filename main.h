#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#define BUFF_SIZE 1024

int print_integer(int);
void print_buffer(char *, int *);
int _putchar(char);
int str_len(char *);
int _printf(const char *, ...);

#endif
