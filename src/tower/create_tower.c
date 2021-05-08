/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void tower_on_mouse_second(game_t *game, cursor_t cursor,
sfRenderWindow **window)
{
    if (game->tower_selected == 3) {
        cursor.pos_mouse.x += -28;
        cursor.pos_mouse.y += -40;
        sfSprite_setPosition(game->defense.aoe_place.tower.sprt,
        cursor.pos_mouse);
        sfRenderWindow_drawSprite(*window,
        game->defense.aoe_place.tower.sprt, NULL);
    } else if (game->tower_selected == 4) {
        cursor.pos_mouse.x += -28;
        cursor.pos_mouse.y += -40;
        sfSprite_setPosition(game->defense.ice_place.tower.sprt,
        cursor.pos_mouse);
        sfRenderWindow_drawSprite(*window,
        game->defense.ice_place.tower.sprt, NULL);
    }
}

void tower_on_mouse(game_t *game, cursor_t cursor, sfRenderWindow **window)
{
    if (game->tower_selected == 1) {
        cursor.pos_mouse.x += -28;
        cursor.pos_mouse.y += -40;
        sfSprite_setPosition(game->defense.basic_place.tower.sprt,
        cursor.pos_mouse);
        sfRenderWindow_drawSprite(*window,
        game->defense.basic_place.tower.sprt, NULL);
    } else if (game->tower_selected == 2) {
        cursor.pos_mouse.x += -36;
        cursor.pos_mouse.y += -40;
        sfSprite_setPosition(game->defense.sniper_place.tower.sprt,
        cursor.pos_mouse);
        sfRenderWindow_drawSprite(*window,
        game->defense.sniper_place.tower.sprt, NULL);
    } else
        tower_on_mouse_second(game, cursor, window);
}

void create_tower_second(game_t *game, sfRenderWindow **window)
{
    sfSprite_setPosition(game->defense.aoe.tower.sprt,
    game->defense.aoe.tower.pos);
    sfRenderWindow_drawSprite(*window, game->defense.aoe.tower.sprt, NULL);
    sfText_setPosition(game->defense.aoe.price.text,
    game->defense.aoe.price.pos);
    sfRenderWindow_drawText(*window, game->defense.aoe.price.text, NULL);
    sfSprite_setPosition(game->defense.ice.tower.sprt,
    game->defense.ice.tower.pos);
    sfRenderWindow_drawSprite(*window, game->defense.ice.tower.sprt, NULL);
    sfText_setPosition(game->defense.ice.price.text,
    game->defense.ice.price.pos);
    sfRenderWindow_drawText(*window, game->defense.ice.price.text, NULL);
}

void create_tower(game_t *game, sfRenderWindow **window)
{
    sfSprite_setPosition(game->defense.basic.tower.sprt,
    game->defense.basic.tower.pos);
    sfRenderWindow_drawSprite(*window, game->defense.basic.tower.sprt, NULL);
    sfText_setPosition(game->defense.basic.price.text,
    game->defense.basic.price.pos);
    sfRenderWindow_drawText(*window, game->defense.basic.price.text, NULL);
    sfSprite_setPosition(game->defense.sniper.tower.sprt,
    game->defense.sniper.tower.pos);
    sfRenderWindow_drawSprite(*window, game->defense.sniper.tower.sprt, NULL);
    sfText_setPosition(game->defense.sniper.price.text,
    game->defense.sniper.price.pos);
    sfRenderWindow_drawText(*window, game->defense.sniper.price.text, NULL);
    create_tower_second(game, window);
}

void display_square(game_t *game, cursor_t *cursor,
sfRenderWindow **window, Towers_t **tower_list)
{
    sfSprite *tower;
    sfVector2f pos;

    if (game->tower_selected != 0) {
        create_placement(game, window);
        tower_on_mouse(game, *cursor, window);
        place_tower(game, tower_list);
    }
}