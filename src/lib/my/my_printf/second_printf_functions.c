/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myprintf-matheo.vitali
** File description:
** second_printf_functions
*/

#include "bsprintf.h"
#include "../my.h"

void printf_int(va_list arg, int *len)
{
    int a = va_arg(arg, int);
    my_put_nbr(a);
    *len += my_intlen(a);
}

void print_str(va_list arg, int *len)
{
    char *a = va_arg(arg, char *);
    my_putstr(a);
    *len += my_strlen(a);
}

void print_char(va_list arg, int *len)
{
    char a = (char) va_arg(arg, int);
    my_putchar(a);
    *len += 1;
}

void print_uint(va_list arg, int *len)
{
    unsigned int a = va_arg(arg, unsigned int);
    my_putunsgnint(a);
    *len += my_unsigned_int_len(a);
}

void print_octal(va_list arg, int *len)
{
    char *str = int_to_str((va_arg(arg, int)));
    char *res = convert_base(str, "0123456789", "01234567");
    my_putstr(res);
    *len += my_strlen(res);
}