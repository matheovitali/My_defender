/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** linked_list
*/

#include "my.h"

void add_element(l_list_t **list)
{
    l_list_t *element;

    element = malloc(sizeof(*element));
    element->next = *list;
    *list = element;
}