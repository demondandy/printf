#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_num(int n);
int print_octa(unsigned int n);
int print_unsignd(unsigned int n);
int print_hexadecup(unsigned int n);
int print_hexadeclow(unsigned int n);
int print_bina(unsigned int n)
int _print_string(char *s);
int rot13(char *point);
int print_rev(char *);
int print_hl(uintptr_t n);

#endif
