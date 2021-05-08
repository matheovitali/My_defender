/*
** EPITECH PROJECT, 2020
** tests codes
** File description:
** infadd
*/

#include <stdlib.h>
#include "my.h"

char *add_opp(char *str1, char *str2, int base)
{
    int res = 0;
    int retenue = 0;
    char *result = malloc(sizeof(char) * (base + 1));

    for (int i = 0; i < base; i += 1) {
        res = str1[i] + str2[i] - 48 - 48;
        if (res + retenue > 9) {
            result[i] = res + retenue + 48 - 10;
            retenue = 1;
        } else {
            result[i] = res + retenue + 48;
            retenue = 0;
        }
    }
    if (retenue != 0)
        result[base] = '1';
    return (result);
}

char *str_align(char *str, int base)
{
    char *res = malloc(sizeof(char) * (base + 2));
    int a = 0;

    for (int i = 0; a < base; i += 1)
    {
        if (str[i] != '\0')
            res[a] = str[i];
        else {
            res[a] = '0';
            i -= 1;
        }
        a += 1;
    }
    return (res);
}

int find_base(char *str1, char *str2)
{
    int base = 0;

    while (str1[0] == '-' || str1[0] == '+' || str1[0] == ' ')
        str1 += 1;
    while (str2[0] == '-' || str2[0] == '+' || str2[0] == ' ')
        str2 += 1;
    if (my_strlen(str1) > my_strlen(str2)) {
        base = my_strlen(str1);
    }else {
        base = my_strlen(str2);
    }
    return (base);
}

char *infadd(char *str1, char *str2)
{
    int base = find_base(str1, str2);
    char *result = malloc(sizeof(char) * (base + 1));
    int res = 0;
    int retenue = 0;
    char *mid_str = malloc(sizeof(char) * (base + 1));

    str1 = my_revstr(str1);
    str2 = my_revstr(str2);
    if (base == my_strlen(str1)) {
        mid_str = str_align(str2, base);
        result = add_opp(str1, mid_str, base);
    } else {
        mid_str = str_align(str1, base);
        result = add_opp(str2, mid_str, base);
    }
    my_revstr(result);
    return (result);
}