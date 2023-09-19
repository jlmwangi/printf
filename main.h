#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int num_print(int arg);
int _string(va_list arguments);
int _printf(const char *format, ...);
int print_num(va_list n);
#endif
