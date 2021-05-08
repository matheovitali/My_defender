/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myls-matheo.vitali
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int i = 0;
    int b = 0;
    char c;

    while (str[i] != '\0')
        i += 1;
    i -= 1;
    while (i > b) {
        c = str[i];
        str [i] = str[b];
        str [b] = c;
        i -= 1;
        b += 1;
    }
    return (str);
}