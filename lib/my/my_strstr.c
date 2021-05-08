/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myls-matheo.vitali
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int b = 0;
    int d = 0;

    if (to_find[0] == '\0')
        return (str);
    while (str[b] != '\0') {
        while (str[b] != to_find[0])
            b += 1;
        d = b;
        while (str[d] == to_find[d - b] && str[d] != '\0') {
            d += 1;
        }
        if (to_find[d - b] == '\0')
            return (&str[b]);
        b += 1;
    }
    return (0);
}