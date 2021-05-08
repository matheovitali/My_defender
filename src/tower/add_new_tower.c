/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** main
*/

#include "../../include.h"

void add_new_turret_third(Towers_t *element, game_t *game, int place,
int turret)
{
    if (turret == 4) {
        game->money -= game->defense.ice.cost;
        sfText_setString(game->money_count.text, int_to_str(game->money));
        element->tower.tower.sprt =
        sfSprite_copy(game->defense.ice.tower.sprt);
        element->tower.range.sprt =
        sfSprite_copy(game->defense.basic.range.sprt);
        check_pos(element, game, place, turret);
        define_circle(element, 160);
    }
}

void add_new_turret_second(Towers_t *element, game_t *game, int place,
int turret)
{
    if (turret == 2) {
        game->money -= game->defense.sniper.cost;
        sfText_setString(game->money_count.text, int_to_str(game->money));
        element->tower.tower.sprt =
        sfSprite_copy(game->defense.sniper.tower.sprt);
        element->tower.range.sprt =
        sfSprite_copy(game->defense.basic.range.sprt);
        check_pos(element, game, place, turret);
        define_circle(element, 300);
    } else if (turret == 3) {
        game->money -= game->defense.aoe.cost;
        sfText_setString(game->money_count.text, int_to_str(game->money));
        element->tower.tower.sprt =
        sfSprite_copy(game->defense.aoe.tower.sprt);
        element->tower.range.sprt =
        sfSprite_copy(game->defense.basic.range.sprt);
        check_pos(element, game, place, turret);
        define_circle(element, 120);
    } else
        add_new_turret_third(element, game, place, turret);
}

void add_new_turret(Towers_t **list, game_t *game, int place, int turret)
{
    Towers_t *element;

    element = malloc(sizeof(*element));
    element->next = *list;
    element->tower.time_hit = 0;
    if (turret == 1) {
        game->money -= game->defense.basic.cost;
        sfText_setString(game->money_count.text, int_to_str(game->money));
        element->tower.tower.sprt =
        sfSprite_copy(game->defense.basic.tower.sprt);
        element->tower.range.sprt =
        sfSprite_copy(game->defense.basic.range.sprt);
        check_pos(element, game, place, turret);
        define_circle(element, 160);
    } else
        add_new_turret_second(element, game, place, turret);
    *list = element;
    game->tower_selected = 0;
}