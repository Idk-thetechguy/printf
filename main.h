#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct func_type - type framework
 * @t: argument's reference
 * @f: pointer- function associated with the argument
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int (*get_func(const char *format))(va_list);
int _putchar(char c);

int print_char(va_list args);
int print_pct(va_list args);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_dec(va_list args);

#endif
