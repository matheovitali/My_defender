/*
** EPITECH PROJECT, 2021
** tests codes
** File description:
** my_str_to_word_array
*/

/*
** EPITECH PROJECT, 2020
** Day8
** File description:
** my_str_to_word_array
*/

#include "my.h"

int my_char_is_alnum(char c, char sep)
{
    if ((c >= 32 && c < sep) || (c > sep && c <= 126))
        return (1);
    return (0);
}

static int count_word(char const *str, char sep)
{
    int i = 0;
    int number = 0;

    while (str[i] != '\0') {
        if (i == 0 && my_char_is_alnum(str[i], sep))
            number++;
        else if (my_char_is_alnum(str[i], sep)
        && !my_char_is_alnum(str[i - 1], sep))
            number++;
        i++;
    }
    return (number);
}

static int start_index(char const *str, int index, char sep)
{
    int i = 0;
    int index_a = 0;

    if (my_char_is_alnum(str[i], sep) && index == 0)
        return (0);
    while (str[i] != '\0') {
        if (my_char_is_alnum(str[i], sep) && !my_char_is_alnum(str[i - 1], sep))
            index_a++;
        if (index_a == index + 1)
            return (i);
        i++;
    }
    return (0);
}

static char *get_word_index(char const *str, int index, char sep)
{
    char *word;
    int i = start_index(str, index, sep);
    int j = i;

    while (my_char_is_alnum(str[j], sep))
        j++;
    word = malloc(sizeof(*word) * (j - i + 1));
    j = 0;
    while (my_char_is_alnum(str[i], sep)) {
        word[j] = str[i];
        j++;
        i++;
    }
    word[j] = '\0';
    return (word);
}

char **my_str_to_word_array(char const *str, char sep)
{
    char **tab;
    char *word;
    int i = 0;
    int j = 0;
    int number_of_word;

    number_of_word = count_word(str, sep);
    tab = malloc(sizeof(*tab) * (number_of_word + 1));
    while (i < number_of_word) {
        word = get_word_index(str, i, sep);
        j = my_strlen(word);
        tab[i] = malloc(sizeof(**tab) * (my_strlen(word) + 1));
        tab[i] = word;
        tab[i][j] = '\0';
        i++;
    }
    tab[i] = 0;
    return (tab);
}