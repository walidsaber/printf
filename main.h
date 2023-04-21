#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void print_int(int num);
void print_double(double num);
void print_unsint(unsigned int num);
long print_octal(unsigned int num);
void print_hexaUPPER(unsigned int num);
void print_hexaLOWER(unsigned int num);
void print_char(int num);
void print_binary(unsigned int num);
int _printf(const char *format, ...);

#endif
