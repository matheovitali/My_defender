/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** define_game
*/

#include "../../include.h"

void define_game_six(game_t *game)
{
    sfSprite_setTexture(game->tower_menu.sprt,
    game->tower_menu.texture, sfFalse);
    sfSprite_setScale(game->tower_menu.sprt, game->tower_menu.scale);
    sfSprite_setPosition(game->tower_menu.sprt, game->tower_menu.pos);
    sfSprite_rotate(game->tower_menu.sprt, 90);
    game->clock = sfClock_create();
    game->time_zero = 0;
    game->money = 125;
    game->pressed = 0;
    define_health(game);
    define_money(game);
}