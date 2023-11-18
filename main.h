#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

typedef struct format
{
	char *pos;
	int (*f)();
} check;

int str_len(char *s);
int _printf(const char *format, ...);
int print_string(va_list my_args);
int print_character(va_list my_args);
int unsigned_int_to_bin(va_list my_args);
int print_percent(void);
int print_numbers(va_list my_args);

#endif
