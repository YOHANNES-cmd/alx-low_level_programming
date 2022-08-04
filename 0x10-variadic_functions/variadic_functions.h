#ifndef _VARIFUNC_H
#define _VARIFUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct str_fmt - Struct fmt
 * @inp_fmt: The format
 * @f: The function associated
 */

typedef struct str_fmt
{
	char *inp_fmt;
	void (*f)(va_list list);
} fmt_a;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
