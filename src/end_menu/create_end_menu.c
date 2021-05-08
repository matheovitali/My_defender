/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_end_menu
*/

#include "../../include.h"

void create_end_menu(end_game_t *end_game, sfRenderWindow **window)
{
    sfRenderWindow_drawSprite(*window, end_game->bg.sprt, sfFalse);
    sfRenderWindow_drawSprite(*window, end_game->exit_b.sprt, sfFalse);
    sfRenderWindow_drawSprite(*window, end_game->menu_b.sprt, sfFalse);
    sfRenderWindow_drawText(*window, end_game->main_menu.text, sfFalse);
    sfRenderWindow_drawText(*window, end_game->quit.text, sfFalse);
    sfRenderWindow_drawText(*window, end_game->lost.text, sfFalse);
}