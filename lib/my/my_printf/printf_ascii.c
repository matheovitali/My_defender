/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myls-matheo.vitali
** File description:
** printf_ascii
*/

#include "bsprintf.h"
#include "../my.h"

void print_for_small_int(int size, int *len)
{
    if (size < 10) {
        my_putchar('\\');
        my_putstr("00");
        my_put_nbr(size);
        *len += 4 + my_intlen(size);
    }
    else {
        my_putchar('\\');
        my_putchar('0');
        my_put_nbr(size);
        *len += 3 + my_intlen(size);
    }
}

void print_ascii_string(va_list arg, int *len)
{
    char *str = va_arg(arg, char *);
    int size = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        size = str[i];
        while (size < 0)
            size = size * -1;
        if (size < 32) {
            print_for_small_int(size, len);
        } else if (size > 126) {
            my_putchar('\\');
            my_put_nbr(size);
            *len += 2 + my_intlen(size);
        } else
            my_putchar(str[i]);
            *len += 1;
    }
}