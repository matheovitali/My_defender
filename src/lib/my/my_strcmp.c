/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-matheo.vitali
** File description:
** my_strcpm
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; i += 1) {
        if (s1[i] != s2[i])
            return (0);
    }
    if (s1[i] != '\0' || s2[i] != '\0')
        return (0);
    return (1);
}