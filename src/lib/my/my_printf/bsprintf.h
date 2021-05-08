/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-matheo.vitali
** File description:
** bsprintf
*/

#ifndef BSPRINTF_H_
#define BSPRINTF_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void printf_int(va_list arg, int *len);
void print_str(va_list arg, int *len);
void print_char(va_list arg, int *len);
void print_d_min(va_list arg, int *len);
void print_d_maj(va_list arg, int *len);
void print_octal(va_list arg, int *len);
void print_percent(va_list arg, int *len);
void print_unsigned_binary(va_list arg, int *len);
void print_ascii_string(va_list arg, int *len);
void print_uint(va_list arg, int *len);
void print_adr(va_list arg, int *len);
int my_printf(char *str, ...);
int my_put_nbr(int n);
void my_putchar(char c);
long long str_to_long_long(char *nbr);
char *long_long_to_str(long long nbr);
int my_unsigned_int_len(unsigned int nbr);
void my_putunsgnint(unsigned int n);

#endif /* !BSPRINTF_H_ */
