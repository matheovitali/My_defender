/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-mydefender-matheo.vitali
** File description:
** attack_tower_second
*/

#include "../../include.h"

void get_close_zombi_mid(int *res_x, int *res_y)
{
    if (*res_x < 0)
        *res_x *= -1;
    if (*res_y < 0)
        *res_y *= -1;
}

zombi_t *get_close_zombi(Towers_t *tower, zombi_t **zombi)
{
    int res_x = 0;
    int res_y = 0;
    int res = 0;
    int prev_res = 100000;
    zombi_t *element = *zombi;
    zombi_t *target = NULL;

    while (element != NULL) {
        res_x = tower->tower.tower.pos.x - element->zombi.pos.x;
        res_y = tower->tower.tower.pos.y - element->zombi.pos.y;
        get_close_zombi_mid(&res_x, &res_y);
        res = res_x + res_y;
        if (prev_res > res) {
            prev_res = res;
            target = element;
        }
        element = element->next;
    }
    return (target);
}

void verif_slow_mid(Towers_t *element, zombi_t *zomb, int *get_iced)
{
    if (element->tower.range.scale.x >= 0.78 &&
    element->tower.range.scale.x < 0.8) {
        if (if_zombi_in_range(110, element, zomb) == 1)
            *get_iced = 1;
    }
}

void verif_slow(Towers_t **tower, zombi_t **zombi)
{
    Towers_t *element = *tower;
    zombi_t *zomb = *zombi;
    int get_iced = 0;

    while (zomb != NULL) {
        get_iced = 0;
        element = *tower;
        while (element != NULL) {
            verif_slow_mid(element, zomb, &get_iced);
            element = element->next;
        }
        if (get_iced > 0) {
            zomb->speed = zomb->base_speed * 0.5;
            zomb->iced = 1;
        } else {
            zomb->speed = zomb->base_speed;
            zomb->iced = 0;
        }
        zomb = zomb->next;
    }
}