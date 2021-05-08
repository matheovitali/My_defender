/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void define_tower_seven(game_t *game)
{
    sfSprite_setTexture(game->defense.aoe.tower.sprt,
    game->defense.aoe.tower.texture, sfFalse);
    sfSprite_setScale(game->defense.aoe.tower.sprt,
    game->defense.aoe.tower.scale);
    sfSprite_setTextureRect(game->defense.aoe.tower.sprt,
    game->defense.aoe.tower.rect);
    game->defense.aoe_place.tower.sprt =
    sfSprite_copy(game->defense.aoe.tower.sprt);
    game->defense.aoe_place.range.sprt =
    sfSprite_copy(game->defense.basic.range.sprt);
    sfSprite_setTexture(game->defense.ice.tower.sprt,
    game->defense.ice.tower.texture, sfFalse);
    sfSprite_setScale(game->defense.ice.tower.sprt,
    game->defense.ice.tower.scale);
    sfSprite_setTextureRect(game->defense.ice.tower.sprt,
    game->defense.ice.tower.rect);
    game->defense.ice_place.tower.sprt =
    sfSprite_copy(game->defense.ice.tower.sprt);
    game->defense.ice_place.range.sprt =
    sfSprite_copy(game->defense.basic.range.sprt);
}

void define_tower_six(game_t *game)
{
    sfSprite_setTexture(game->defense.basic.range.sprt,
    game->defense.basic.range.texture, sfFalse);
    sfSprite_setScale(game->defense.basic.range.sprt,
    game->defense.basic.range.scale);
    game->defense.basic_place.tower.sprt =
    sfSprite_copy(game->defense.basic.tower.sprt);
    game->defense.basic_place.range.sprt =
    sfSprite_copy(game->defense.basic.range.sprt);
    sfSprite_setTexture(game->defense.sniper.tower.sprt,
    game->defense.sniper.tower.texture, sfFalse);
    sfSprite_setScale(game->defense.sniper.tower.sprt,
    game->defense.sniper.tower.scale);
    sfSprite_setTextureRect(game->defense.sniper.tower.sprt,
    game->defense.sniper.tower.rect);
    game->defense.sniper_place.tower.sprt =
    sfSprite_copy(game->defense.sniper.tower.sprt);
    game->defense.sniper_place.range.sprt =
    sfSprite_copy(game->defense.basic.range.sprt);
    define_tower_seven(game);
}