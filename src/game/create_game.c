/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** create_game
*/

#include "../../include.h"

void create_health_and_money(game_t *game, sfRenderWindow **window)
{
    sfSprite_setPosition(game->health_health.sprt, game->health_health.pos);
    sfRenderWindow_drawSprite(*window, game->health_health.sprt, NULL);
    sfText_setPosition(game->health_count.text, game->health_count.pos);
    sfRenderWindow_drawText(*window, game->health_count.text, NULL);
    sfSprite_setPosition(game->money_money.sprt, game->money_money.pos);
    sfRenderWindow_drawSprite(*window, game->money_money.sprt, NULL);
    sfText_setPosition(game->money_count.text, game->money_count.pos);
    sfRenderWindow_drawText(*window, game->money_count.text, NULL);
}

void create_tower_menu(game_t *game, sfRenderWindow **window)
{
    game->menu_b.pos.y = 15;
    game->Towers.pos.y = 20;
    sfRenderWindow_drawSprite(*window, game->tower_menu.sprt, NULL);
}

void create_game_even_more(game_t *game, sfRenderWindow **window)
{
    sfSprite_setPosition(game->menu_b.sprt, game->menu_b.pos);
    sfText_setPosition(game->Towers.text, game->Towers.pos);
    sfRenderWindow_drawSprite(*window, game->roll_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, game->menu_b.sprt, NULL);
    sfRenderWindow_drawText(*window, game->Towers.text, NULL);
    create_health_and_money(game, window);
}

void create_game_more(game_t *game, sfRenderWindow **window)
{
    game->roll_b.pos.y = 3000;
    game->setting_b.pos.y = 10;
    game->pause_b.pos.y = 90;
    game->rotate_roll_b.pos.y = 225;
    sfSprite_setPosition(game->roll_b.sprt, game->roll_b.pos);
    sfSprite_setPosition(game->setting_b.sprt, game->setting_b.pos);
    sfSprite_setScale(game->setting_b.sprt, game->setting_b.scale);
    sfSprite_setPosition(game->pause_b.sprt, game->pause_b.pos);
    sfSprite_setScale(game->pause_b.sprt, game->pause_b.scale);
    sfSprite_setPosition(game->rotate_roll_b.sprt, game->rotate_roll_b.pos);
    sfSprite_setScale(game->rotate_roll_b.sprt, game->rotate_roll_b.scale);
    sfRenderWindow_drawSprite(*window, game->setting_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, game->pause_b.sprt, NULL);
    sfRenderWindow_drawSprite(*window, game->rotate_roll_b.sprt, NULL);
}

void create_game(game_t *game, sfRenderWindow **window)
{
    game->Towers.pos.y = 685;
    game->menu_b.pos.y = 675;
    game->roll_b.pos.y = 10;
    game->setting_b.pos.y = 3000;
    game->pause_b.pos.y = 3000;
    game->rotate_roll_b.pos.y = 3000;
    sfSprite_setPosition(game->setting_b.sprt, game->setting_b.pos);
    sfSprite_setPosition(game->pause_b.sprt, game->pause_b.pos);
    sfSprite_setPosition(game->rotate_roll_b.sprt, game->rotate_roll_b.pos);
    sfSprite_setPosition(game->map.sprt, game->map.pos);
    sfSprite_setScale(game->map.sprt, game->map.scale);
    sfSprite_setPosition(game->roll_b.sprt, game->roll_b.pos);
    sfSprite_setScale(game->roll_b.sprt, game->roll_b.scale);
    sfText_setPosition(game->Towers.text, game->Towers.pos);
    sfRenderWindow_drawSprite(*window, game->map.sprt, NULL);
}