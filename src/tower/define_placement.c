/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void define_placement_five(game_t *game)
{
    sfSprite_setTexture(game->defense.placement.three.sprt,
    game->defense.placement.three.texture, sfFalse);
    sfSprite_setScale(game->defense.placement.three.sprt,
    game->defense.placement.three.scale);
    sfSprite_setTexture(game->defense.placement.four.sprt,
    game->defense.placement.four.texture, sfFalse);
    sfSprite_setScale(game->defense.placement.four.sprt,
    game->defense.placement.four.scale);
    sfSprite_setTexture(game->defense.placement.five.sprt,
    game->defense.placement.five.texture, sfFalse);
    sfSprite_setScale(game->defense.placement.five.sprt,
    game->defense.placement.five.scale);
}

void define_placement_four(game_t *game)
{
    sfColor color;

    color = sfColor_fromRGBA(255, 255, 255, 150);
    sfSprite_setColor(game->defense.placement.one.sprt, color);
    sfSprite_setColor(game->defense.placement.two.sprt, color);
    sfSprite_setColor(game->defense.placement.three.sprt, color);
    sfSprite_setColor(game->defense.placement.four.sprt, color);
    sfSprite_setColor(game->defense.placement.five.sprt, color);

    sfSprite_setTexture(game->defense.placement.one.sprt,
    game->defense.placement.one.texture, sfFalse);
    sfSprite_setScale(game->defense.placement.one.sprt,
    game->defense.placement.one.scale);
    sfSprite_setTexture(game->defense.placement.two.sprt,
    game->defense.placement.two.texture, sfFalse);
    sfSprite_setScale(game->defense.placement.two.sprt,
    game->defense.placement.two.scale);
    define_placement_five(game);
}

void define_placement_third(game_t *game)
{
    game->defense.placement.four.sprt = sfSprite_create();
    game->defense.placement.four.texture =
    sfTexture_createFromFile("used_images/tower_placement.png", NULL);
    game->defense.placement.four.pos.x = 710;
    game->defense.placement.four.pos.y = 0;
    game->defense.placement.four.scale.x = 0.15;
    game->defense.placement.four.scale.y = 0.15;

    game->defense.placement.five.sprt = sfSprite_create();
    game->defense.placement.five.texture =
    sfTexture_createFromFile("used_images/tower_placement.png", NULL);
    game->defense.placement.five.pos.x = 270;
    game->defense.placement.five.pos.y = 363;
    game->defense.placement.five.scale.x = 0.15;
    game->defense.placement.five.scale.y = 0.15;
}

void define_placement_second(game_t *game)
{
    game->defense.placement.two.sprt = sfSprite_create();
    game->defense.placement.two.texture =
    sfTexture_createFromFile("used_images/tower_placement.png", NULL);
    game->defense.placement.two.pos.x = 360;
    game->defense.placement.two.pos.y = 507;
    game->defense.placement.two.scale.x = 0.15;
    game->defense.placement.two.scale.y = 0.15;

    game->defense.placement.three.sprt = sfSprite_create();
    game->defense.placement.three.texture =
    sfTexture_createFromFile("used_images/tower_placement.png", NULL);
    game->defense.placement.three.pos.x = 710;
    game->defense.placement.three.pos.y = 290;
    game->defense.placement.three.scale.x = 0.15;
    game->defense.placement.three.scale.y = 0.15;
}

void define_placement(game_t *game)
{
    game->defense.placement.p_one = 0;
    game->defense.placement.p_two = 0;
    game->defense.placement.p_three = 0;
    game->defense.placement.p_four = 0;
    game->defense.placement.p_five = 0;
    game->defense.placement.p_one_placed = 0;
    game->defense.placement.p_two_placed = 0;
    game->defense.placement.p_three_placed = 0;
    game->defense.placement.p_four_placed = 0;
    game->defense.placement.p_five_placed = 0;
    game->defense.placement.one.sprt = sfSprite_create();
    game->defense.placement.one.texture =
    sfTexture_createFromFile("used_images/tower_placement.png", NULL);
    game->defense.placement.one.pos.x = 358;
    game->defense.placement.one.pos.y = 292;
    game->defense.placement.one.scale.x = 0.15;
    game->defense.placement.one.scale.y = 0.15;
    define_placement_second(game);
    define_placement_third(game);
    define_placement_four(game);
}