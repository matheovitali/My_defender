/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** convert_base_main
*/

#include "my.h"

char *convert_base(char *nbr, char *base_from, char *base_to)
{
    int neg = 0;
    char *res;

    if (nbr[0] == '-') {
        nbr += 1;
        neg = 1;
    }
    res = convert_base_before(nbr, base_from, base_to);
    res = convert_to_next_base(base_to, res);
    if (neg == 1) {
        res -= 1;
        res[0] = '-';
    }
    return (res);
}