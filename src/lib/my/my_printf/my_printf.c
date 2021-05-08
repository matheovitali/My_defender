/*
** EPITECH PROJECT, 2020
** tests codes
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "bsprintf.h"
#include "../my.h"

int process_flag(char a, char *index_tab)
{
    int i = 0;

    for (; index_tab[i] != 0; i += 1) {
        if (index_tab[i] == a)
            return (i);
    }
    return (0);
}

int verify_flags(char *index_tab, int index, char *str)
{
    for (int i = 0; index_tab[i] != 0; i += 1) {
        if (index_tab[i] == str[1])
            index = -2;
    }
    return (index);
}

int flag(char **str, va_list *list, char *index_tab, int index)
{
    int compteur = 0;
    void (*fonction[13])(va_list, int *) = {printf_int, print_uint, print_adr,
    printf_int, print_str, print_char, print_char, print_d_min, print_d_maj,
    print_octal, print_percent, print_unsigned_binary, print_ascii_string};

    if (**str == '%' && index == -2) {
        index = process_flag(str[0][1], index_tab);
        fonction[index](*list, &compteur);
        *str += 1;
    }else {
        my_putchar(**str);
        compteur += 1;
    }
    return (compteur);
}

int my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    char index_tab[14] = {'i', 'u', 'p', 'd', 's', 'c', 'C',
    'x', 'X', 'o', '%', 'b', 'S', 0};
    int compteur = 0;

    for (int index = 0; *str != '\0';) {
        index = verify_flags(index_tab, index, str);
        compteur += flag(&str, &list, index_tab, index);
        index = 0;
        str += 1;
    }
    compteur += 1;
    return (compteur);
}