#ifndef MAIN_H
#define MAIN_H

#include <unsitd.h>
#include <stdlib.h>
#include <stdio.h>

/** STRUCTURES **/
typedef struct print {
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int (*get_print_func(const char *s, int index))(va_list,char *, unsigned int);
int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);

int print_chr(va_list argument, char *buf, unsigned int ibuf);

printf("%s I am %d years old.\n", "Cara", 4);

#endif
