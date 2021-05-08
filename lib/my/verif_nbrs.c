/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-matheo.vitali
** File description:
** verif_nbrs
*/

#include "my.h"

int are_valid_ints(long x, long y)
{
    if (x < -2147483648 || y < -2147483648)
        return (0);
    else if (x > 2147483647 || y > 2147483647)
        return (0);
    else
        return (1);
}

int verif_ints(char *str)
{
    long nbr = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if ((str[i] < 48 || str[i] > 57) && str[i] != '-' && str[i] != '+')
            return (0);
    }
    nbr = number_in_long(str);
    if (are_valid_ints(nbr, 1) == 1)
        return (1);
    return (0);
}