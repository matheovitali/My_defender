/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** error_handling
*/

#include "../include.h"

int error_arg(int ac, char **av)
{
    if (ac > 1 ) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            usage();
            return (0);
        } else
            return (84);
    }
    return (1);
}