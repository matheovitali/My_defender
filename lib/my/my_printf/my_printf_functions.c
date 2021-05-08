/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf_functions
*/

#include "bsprintf.h"
#include "../my.h"

void print_d_min(va_list arg, int *len)
{
    char *str = int_to_str((va_arg(arg, int)));
    char *res = convert_base(str, "0123456789", "0123456789abcdef");
    my_putstr(res);
    *len += my_strlen(res);
}

void print_d_maj(va_list arg, int *len)
{
    char *str = int_to_str((va_arg(arg, int)));
    char *res = convert_base(str, "0123456789", "0123456789ABCDEF");
    my_putstr(res);
    *len += my_strlen(res);
}

void print_percent(va_list arg, int *len)
{
    my_putchar('%');
    len += 1;
}

void print_unsigned_binary(va_list arg, int *len)
{
    char *str = int_to_str(va_arg(arg, unsigned int));
    char *res = convert_base(str, "0123456789", "01");
    my_putstr(res);
    *len += my_strlen(res);
}

void print_adr(va_list arg, int *len)
{
    char *str = long_long_to_str(va_arg(arg, long long));
    char *res = convert_base(str, "0123456789", "0123456789abcdef");
    my_putstr("0x");
    my_putstr(res);
    *len += my_strlen(res);
}