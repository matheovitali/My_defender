/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** convert_base
*/

#include <stdlib.h>
#include "my.h"

char **convert_less_than_2(char *nbr, char *base_f, char **tab, int d)
{
    int result = 0;
    int retenue = 0;
    int i = 0;

    for (int a = 0; base_f[a] != nbr[0]; a += 1)
        result += 1;
    tab[d][i] = result + 48;
    return (tab);
}

char *convert_more_than_2(char *nbr, int d, char *base_f, char **tab)
{
    int result = 0;
    int retenue = 0;
    int b = 0;
    int res = 0;
    int i = 0;

    res = my_strlen(base_f);
    for (b = 0; base_f[b] != nbr[0]; b += 1);
    result += res * b;
    for (int z = 2; z != my_strlen(nbr); z += 1)
        result = result * my_strlen(base_f);
    for (int i = 0; result > 0; i += 1) {
        tab[d][i] = (result % 10) + 48;
        result = result / 10;
    }
    my_revstr(tab[d]);
    return (tab[d]);
}

char *pre_convert_base(char *nbr, char *base_f, int res, int size)
{
    char **tab = malloc(sizeof(char *) * (my_strlen(nbr) * 2));
    int i = 0;
    int result = 0;
    int retenue = 0;
    int d = 0;

    for (; d != my_strlen(nbr) * 2; d += 1)
        tab[d] = malloc(sizeof(char) * (my_strlen(base_f) * my_strlen(nbr)));
    d = 0;
    while (my_strlen(nbr) > 1) {
        tab[d] = convert_more_than_2(nbr, d, base_f, tab);
        nbr += 1;
        d += 1;
    }
    tab = convert_less_than_2(nbr, base_f, tab, d);
    d += 1;
    for (int i = 0; i != d; i += 1)
        tab[i + 1] = infadd(tab[i], tab[i + 1]);
    return (tab[d]);
}

char *convert_base_before(char *nbr, char *base_f, char *base_to)
{
    int res = 0;
    int size = my_strlen(base_f);
    int result = 0;
    int b = 0;
    char *endres;

    for (int i = 0; i < my_strlen(nbr); i += 1) {
        if (nbr[0] == base_f[0])
            nbr += 1;
    }
    if (nbr == NULL)
        return (0);
    if (my_strlen(base_f) > my_strlen(base_to))
        result = my_strlen(base_f) / my_strlen(base_to);
    else
        result = my_strlen(base_to) / my_strlen(base_f);
    endres = malloc(sizeof(char) * (result + 1));
    endres = pre_convert_base(nbr, base_f, res, size);
    return (endres);
}

char *convert_to_next_base(char *base_to, char *n_res)
{
    int maloc = my_strlen(base_to) + my_strlen(n_res);
    char *result = malloc(sizeof(char) * (5 * maloc));
    int nbr = str_to_int(n_res);
    int tmp_int = 0;
    int tmp_nbr = 0;

    if (nbr == 0) {
        result[0] = base_to[0];
        return (result);
    }
    for (int i = 0; nbr >= my_strlen(base_to); i += 1) {
        tmp_nbr = nbr / my_strlen(base_to);
        tmp_int = nbr - (tmp_nbr * my_strlen(base_to));
        result[i] = base_to[tmp_int];
        nbr = tmp_nbr;
    }
    my_revstr(result);
    result -= 1;
    result[0] = base_to[nbr];
    return (result);
}