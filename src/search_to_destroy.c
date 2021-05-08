/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** search_to_destroy
*/

#include "../include.h"

void search_to_detroy(int window_index, all_menu_t *all_menu)
{
    if (window_index == 0) {
        if (all_menu->pause.create == 1)
            destroy_pause(&all_menu->pause);
        if (all_menu->game.create == 1)
            destroy_game(&all_menu->game);
    } else if (window_index == 1) {
        if (all_menu->option.create == 1)
            destroy_option(&all_menu->option);
        if (all_menu->main.create == 1)
            destroy_main(&all_menu->main);
    } else if (window_index == 2) {
        if (all_menu->pause.create == 1)
            destroy_pause(&all_menu->pause);
    }
}