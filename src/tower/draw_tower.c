/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** draw_tower
*/

#include "../../include.h"

void draw_tower_mid(Towers_t *element, zombi_t **zombi)
{
    if (element->tower.range.scale.x >= 0.59 &&
    element->tower.range.scale.x <= 0.61 &&
    element->tower.time_hit > 40) {
        attack_all_zombi(element, zombi, 1);
    } else if (element->tower.range.scale.x > 0.795 &&
    element->tower.range.scale.x <= 0.81 &&
    element->tower.time_hit > 40) {
        if (if_zombi_in_range(110, element,
        get_close_zombi(element, zombi)) == 1) {
            get_close_zombi(element, zombi)->pv -= 5;
            element->tower.time_hit = 0;
        }
    } else  if (element->tower.range.scale.x > 1.2 &&
    element->tower.time_hit > 80) {
        if (if_zombi_in_range(280, element,
        get_close_zombi(element, zombi)) == 1) {
            get_close_zombi(element, zombi)->pv -= 12;
            element->tower.time_hit = 0;
        }
    }
}

void draw_towers(Towers_t **tower_list, sfRenderWindow **window,
zombi_t **zombi, game_t *game)
{
    Towers_t *element = *tower_list;

    while (element != NULL) {
        sfRenderWindow_drawSprite(*window, element->tower.tower.sprt, NULL);
        if (game->tower_menu_on == 1)
            sfRenderWindow_drawSprite(*window,
            element->tower.range.sprt, NULL);
        verif_slow(tower_list, zombi);
        if (*zombi != NULL)
            draw_tower_mid(element, zombi);
        element->tower.time_hit += 1;
        element = element->next;
    }
}