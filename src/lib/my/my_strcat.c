/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday07-matheo.vitali
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    int a = 0;

    for (int i = 0; dest[i] != '\0'; a += 1, i += 1)
        str[a] = dest[i];
    for (int i = 0; src[i] != '\0'; a += 1, i += 1)
        str[a] = src[i];
    str[a] = '\0';
    return (str);
}