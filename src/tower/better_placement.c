/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void adjust_range(Towers_t *element, int turret)
{
    if (turret == 1) {
        element->tower.range.scale.x = 0.8;
        element->tower.range.scale.y = 0.8;
    } if (turret == 2) {
        element->tower.range.scale.x = 1.5;
        element->tower.range.scale.y = 1.5;
        element->tower.range.pos.x += 12;
        element->tower.range.pos.y += 10;
    } if (turret == 3) {
        element->tower.range.scale.x = 0.6;
        element->tower.range.scale.y = 0.6;
    } if (turret == 4) {
        element->tower.range.scale.x = 0.79;
        element->tower.range.scale.y = 0.79;
    }
    sfSprite_setScale(element->tower.range.sprt, element->tower.range.scale);
}

void check_pos_four(Towers_t *element, game_t *game, int place, int turret)
{
    sfFloatRect rect = sfSprite_getLocalBounds(game->defense.basic.range.sprt);

    if (turret == 2) {
        element->tower.tower.pos.x -= 10;
        element->tower.tower.pos.y -= 10;
        element->tower.range.pos.x -= 10;
        element->tower.range.pos.y -= 25;
    }
    if (turret == 3 || turret == 4) {
        element->tower.range.pos.y -= 7;
        element->tower.tower.pos.y -= 10;
    }
    adjust_range(element, turret);
    sfSprite_setOrigin(element->tower.range.sprt, (sfVector2f) {rect.width / 2,
    rect.height / 2});
    sfSprite_setPosition(element->tower.tower.sprt, element->tower.tower.pos);
    sfSprite_setPosition(element->tower.range.sprt, element->tower.range.pos);
}

void check_pos_third(Towers_t *element, game_t *game, int place, int turret)
{
    if (place == 5) {
        element->tower.tower.pos.x = 280;
        element->tower.tower.pos.y = 366;
        element->tower.range.pos.x = 280 + 30;
        element->tower.range.pos.y = 366 + 30;
    }
}

void check_pos_second(Towers_t *element, game_t *game, int place, int turret)
{
    if (place == 3) {
        element->tower.tower.pos.x = 720;
        element->tower.tower.pos.y = 295;
        element->tower.range.pos.x = 720 + 30;
        element->tower.range.pos.y = 295 + 30;
    } else if (place == 4) {
        element->tower.tower.pos.x = 720;
        element->tower.tower.pos.y = 3;
        element->tower.range.pos.x = 720 + 30;
        element->tower.range.pos.y = 3 + 30;
    } else
        check_pos_third(element, game, place, turret);
}

void check_pos(Towers_t *element, game_t *game, int place, int turret)
{
    if (place == 1) {
        element->tower.tower.pos.x = 368;
        element->tower.tower.pos.y = 295;
        element->tower.range.pos.x = 368 + 30;
        element->tower.range.pos.y = 295 + 30;
    } else if (place == 2) {
        element->tower.tower.pos.x = 373;
        element->tower.tower.pos.y = 510;
        element->tower.range.pos.x = 373 + 30;
        element->tower.range.pos.y = 510 + 30;
    } else
        check_pos_second(element, game, place, turret);
    check_pos_four(element, game, place, turret);
}