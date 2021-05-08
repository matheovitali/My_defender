/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** str_to_int
*/

#include <stdlib.h>
#include "my.h"

int str_to_int(char *nbr)
{
    int res = 0;

    for (int i = 0; nbr[i] != '\0'; i += 1) {
        res = res * 10;
        res += nbr[i] - 48;
    }
    return (res);
}

char *int_to_str_end(char *res, int neg, int nbr, int size)
{
    int i = 0;

    for (; nbr > 0; i += 1) {
        res[i] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    res[i] = '\0';
    if (neg == 1) {
        res -= 1;
        res[0] = '-';
    }
    my_revstr(res);
    return (res);
}

char *int_to_str(int nbr)
{
    char *res = NULL;
    int tmp_nbr = nbr;
    int size = 0;
    int neg = 0;

    if (nbr < 0) {
        nbr = nbr * -1;
        neg = 1;
    }
    while (tmp_nbr > 0) {
        size += 1;
        tmp_nbr = tmp_nbr / 10;
    }
    if (nbr == 0) {
        res = "0\0";
        return (res);
    }
    res = malloc(sizeof(char) * (size - 1));
    res = int_to_str_end(res, neg, nbr, size);
    return (res);
}