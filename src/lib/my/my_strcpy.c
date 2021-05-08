/*
** EPITECH PROJECT, 2020
** B-PSU-100-STG-1-1-myls-matheo.vitali
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int a = 0;

    while (src[i] != '\0') {
        dest[a] = src[i];
        i += 1;
        a += 1;
    }
    if (src[i] == '\0') {
        dest[a] = src[i];
        return (dest);
    }
}
