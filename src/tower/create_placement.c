/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void create_placement(game_t *game, sfRenderWindow **window)
{
    sfSprite_setPosition(game->defense.placement.one.sprt,
    game->defense.placement.one.pos);
    sfRenderWindow_drawSprite(*window, game->defense.placement.one.sprt, NULL);
    sfSprite_setPosition(game->defense.placement.two.sprt,
    game->defense.placement.two.pos);
    sfRenderWindow_drawSprite(*window, game->defense.placement.two.sprt, NULL);
    sfSprite_setPosition(game->defense.placement.three.sprt,
    game->defense.placement.three.pos);
    sfRenderWindow_drawSprite(*window,
    game->defense.placement.three.sprt, NULL);
    sfSprite_setPosition(game->defense.placement.four.sprt,
    game->defense.placement.four.pos);
    sfRenderWindow_drawSprite(*window,
    game->defense.placement.four.sprt, NULL);
    sfSprite_setPosition(game->defense.placement.five.sprt,
    game->defense.placement.five.pos);
    sfRenderWindow_drawSprite(*window,
    game->defense.placement.five.sprt, NULL);
}