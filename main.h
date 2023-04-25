#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} sign_t;
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, sign_t *f);
} ph;
int print_int(va_list l, sign_t *f);
void print_number(int n);
int print_unsigned(va_list l, sign_t *f);
int count_digit(int i);
int print_hex(va_list l, sign_t *f);
int print_hex_big(va_list l, sign_t *f);
int print_binary(va_list l, sign_t *f);
int print_octal(va_list l, sign_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, sign_t *);
int get_flag(char s, sign_t *f);
int print_string(va_list l, sign_t *f);
int print_char(va_list l, sign_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, sign_t *f);
int print_rev(va_list l, sign_t *f);
int print_bigS(va_list l, sign_t *f);
int print_address(va_list l, sign_t *f);
int print_percent(va_list l, sign_t *f);

#endif
