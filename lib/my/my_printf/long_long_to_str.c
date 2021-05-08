/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myprintf-matheo.vitali
** File description:
** long_long_to_str
*/

#include "bsprintf.h"
#include "../my.h"

char *long_long_to_str_end(char *res, int neg, long long nbr, long long size)
{
    res = malloc(sizeof(char) * (size + 4));
    for (int i = 0; nbr > 0; i += 1) {
        res[i] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    my_revstr(res);
    if (neg == 1) {
        res -= 1;
        res[0] = '-';
    }
    return (res);
}

char *long_long_to_str(long long nbr)
{
    char *res;
    long long tmp_nbr = nbr;
    long long size = 0;
    int neg = 0;

    if (nbr < 0) {
        nbr = nbr * -1;
        neg = 1;
    }
    while (tmp_nbr > 0) {
        size += 1;
        tmp_nbr = tmp_nbr / 10;
    }
    res = malloc(sizeof(char) * (size + 4));
    res = long_long_to_str_end(res, neg, nbr, size);
    return (res);
}